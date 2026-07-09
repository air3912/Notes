#pragma once
/***********************
运行环境： dev c++ + EGE
EGE官网:   https://xege.org/
EGE下载:   ege20.08_all 
程序说明：
（1）本程序用于展示对象包装、继承相关技术特征以及应用价值。
包装分离了开发者和使用者，framework.hpp 涉及了许多包装与继承的重要技术，
如设计模式（单例模式，模板模式，对象自动管理池）、接口、抽象类（纯虚函数）、虚析构、继承、数据和展示分离设计等。
（2）本程序是编写一个2D图形动画的简单框架。使用方法参考 demo.cpp
（3）体会什么是让用户“关注业务逻辑，远离技术细节，”的设计思路。
（3）程序包含： 
数据类：struct Vector2D；接口：class Shape；
抽象图形：class AbstractShape2D，它是所有图形的父类；已实现的图形包括：Point，Circle。
class ShapeManager 实现的图形对象的自动收集和释放，用户仅需要用 new 创建图形。
class SimulationSystemSimpleAbstractFramwork 是框架基类。正常情况下，用户仅需重写 init 和 tick 方法。
************************/ 
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

struct Vector2D {
    double x, y;
}; 

class Shape {
    public:
        virtual void draw() = 0;
        virtual ~Shape()  {};
};

class AbstractShape2D:public virtual Shape {
    public:
        virtual float getArea() = 0;
        virtual float getPerimeter() = 0;
        
        bool isVisible();
        void setVisble(bool v); 
        
        Vector2D origin = {x:0,y:0};
        void moveTo(int x,int y);
        ~AbstractShape2D();
    protected:
        string name;
        bool visible = true;
        
        AbstractShape2D(const string& name="shape");
};

class Point final:public AbstractShape2D {
    public:
        Point(int x,int y):AbstractShape2D("point") {
            moveTo(x,y); 
        };
//modified members
        float getArea() {return 0;}
        float getPerimeter() {return 0;}
        void draw();
};

class Circle final:public AbstractShape2D {
    public:
        Circle(int x,int y, int r):AbstractShape2D("circle") {
            moveTo(x,y); 
            this->radius = r;
        }
//modified members
        float getArea();
        float getPerimeter();
        void draw();
//new members
        void expand(int delta);
        void contract(int delta);
    protected:
        int radius;      
};

/*
该类实现了图像对象管理。
（1） 单例模式
（2） 是 AbstractShape2D 友元
（3） 一些私有方法，方便 AbstractShape2D 管理图形 
*/
class ShapeManager {
    int count = 0;
    vector<Shape *> shapes;
    friend AbstractShape2D;

    static ShapeManager* shapeManager; 
    
    void addShape(Shape& shp) {
        shapes.push_back(&shp);
    } 
    void removeShape(Shape& shp) {
        auto it =find(shapes.begin(), shapes.end(), &shp);
        shapes.erase(it); 
    } 
      
    public:
        ~ShapeManager() {
            shapeManager = nullptr;
            for (auto x:shapes) {
                delete x;
            }
        }
        static ShapeManager& getInstance() {
            if (shapeManager) return *shapeManager;
            else shapeManager = new ShapeManager;
            return *shapeManager; 
        }
        int getShapesCount() const {
            return count;
        } 
        void drawShapes() const {
            for (auto x:shapes) { (x)->draw(); }
        }       
}; 

ShapeManager* ShapeManager::shapeManager = nullptr;

/*
该类是仿真框架的模板。
普通用户必须实现 init 和 tick 即可完成设计 
*/
class SimulationSystemSimpleAbstractFramwork {
    public:  
        virtual void init() = 0;
        virtual void tick() = 0;
        virtual void before_run();
        int run(int fps=60, int breakout=32); // 空格终止 
        virtual void after_run();
};

//graph.cpp
#include<graphics.h>
#include<iostream>
using namespace std;
//---AbstractShape2D--------------------
AbstractShape2D::AbstractShape2D(const string& name) {
    this->name = name;
    cout << "creating shape " << name << endl; 
    ShapeManager::getInstance().addShape(*this);
}

AbstractShape2D::~AbstractShape2D() {
    cout << "destructing shape " << name << endl; 
}

bool AbstractShape2D::isVisible(){
    return this->visible;
}
void AbstractShape2D::setVisble(bool v){
    this->visible = v;
}

void AbstractShape2D::moveTo(int x,int y){
    origin.x = x;
    origin.y = y;
}

//---Point--------------------
void Point::draw() {
    if (isVisible()) {
        putpixel(origin.x, origin.y , getcolor());
    }
}

//---Circle--------------------
float Circle::getArea() {
    return 3.1415926 * radius * radius;
}
        
float Circle::getPerimeter() {
    return 3.1415926 * 2 * radius;
}

void Circle::draw() {
    if (isVisible()) {
    	circle(origin.x, origin.y, radius); 
    }
}

void Circle::expand(int delta) {
    radius = radius + delta;
    if (radius < 0)  radius = 0;
}

void Circle::contract(int delta){
    expand(-delta);
}

//---SimulationSystemSimpleAbstractFramwork----------------------
#include <graphics.h>
void SimulationSystemSimpleAbstractFramwork::before_run() {
    initgraph( 640, 480 );
    setcolor( RGB(0xff, 0xff, 0xff) );
    setfillcolor( RGB(0, 0, 0xff) );
    setrendermode(RENDER_MANUAL);
}

int SimulationSystemSimpleAbstractFramwork::run(int fps, int breakout) {
    init();
    before_run();
    for ( ; is_run(); delay_fps(fps)) {
        //事件检测 
        if (kbhit()) {
            char ch = getch();
            if (ch = breakout) break;
        } 
        //模型计算 
        tick();
        //图形对象绘制   
        cleardevice();
        ShapeManager::getInstance().drawShapes();
    } 
    after_run();
    return 0;   
}

void SimulationSystemSimpleAbstractFramwork::after_run() {
    cleardevice();
    //release all shapes
    delete &(ShapeManager::getInstance());    
}


