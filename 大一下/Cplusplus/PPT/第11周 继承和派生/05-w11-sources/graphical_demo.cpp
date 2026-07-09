/***********************
运行环境： dev c++ + EGE
EGE官网:   https://xege.org/
EGE下载:   ege20.08_all 
程序说明：
    （1）包含 Location 数据实体和 Point、Circle 可显示图形实体 
    （2）与课件相比，这里图形对象采用数据和显示分离设计，
         只有 draw() 方法渲染对象模型
    （3）Location、Point、Circle 之间的继承并非合理的设计， 
         仅是为了展示对象继承的复用、拓展和演化。例如：
         Circle对象可以调用 Point 的 draw 是不合理的， 
         根源在于（圆 is 点) 不符合逻辑   
************************/ 

//graph.h
class Location {
    public:
        Location(int x,int y);
        int getX();
        int getY();
    protected:
        int x_pos, y_pos;
}; 

class Point:public Location {
    public:
        Point(int x,int y);
//new members        
        bool isVisible();
        void show();
        void hide();
        void draw(); 
        void moveTo(int x,int y);
    protected:
        bool visible;
};

class Circle:public Point {
    public:
        Circle(int x,int y, int r);
//modified members
        void draw();
//new members
        void expand(int delta);
        void contract(int delta);
    protected:
        int radius;      
};

//graph.cpp
#include <graphics.h>
Location::Location(int x,int y) {
    this->x_pos = x;
    this->y_pos = y;
}

int Location::getX() {
    return x_pos;
}

int Location::getY() {
    return y_pos;
}

//-----------------------
Point::Point(int x,int y):Location(x,y) {
    visible = true;
}

bool Point::isVisible() {
    return visible;
}

void Point::show() {
    if (!isVisible()) {
        visible = true;
    }
}
        
void Point::hide() {
    if (isVisible()) {
    	visible = false;	
    }
}

void Point::draw() {
    if (isVisible()) {
        putpixel(x_pos, y_pos, getcolor());
    }
}

void Point::moveTo(int x,int y) {
    x_pos = x;
    y_pos = y;    
}

//-----------------------
Circle::Circle(int x,int y, int r):Point(x,y),radius(r) {
}

void Circle::draw() {
    if (isVisible()) {
    	circle(x_pos, y_pos, radius); 
    }
}

void Circle::expand(int delta) {
    radius = radius + delta;
    if (radius < 0)  radius = 0;
}

void Circle::contract(int delta){
    expand(-delta);
}


// client.cpp
#include <graphics.h>
#include <time.h>
#include <math.h>

int main() {
    initgraph( 640, 480 );
    setcolor( RGB(0xff, 0xff, 0xff) );
    setfillcolor( RGB(0, 0, 0xff) );
    setrendermode(RENDER_MANUAL);
    //准备对象 
    Point p(0,0);
    Circle circle(0,0,10);
    
    double alpha = 0;
    int r = 100;
    int delta = 1;
    int sign = 1;
    int x0=300,y0=200;
    //离散仿真循环 
    for ( ; is_run(); delay_fps(60)) {
        //事件检测 
        if (kbhit()) {
            char ch = getch();
            break; 
        } 
        //模型计算 
        alpha += 0.02;
        if (alpha > PI * 2) {
            sign = -sign;
            alpha -= PI * 2; 
        }
        int x = x0 - r*cos(alpha);
        int y = y0 + r*sin(alpha);
        
        p.moveTo(x,y);
        circle.moveTo(x0,y0);
        circle.expand(sign*delta);
        //图形对象绘制   
        cleardevice();
        
        p.draw();
        circle.draw(); 
    }
    return 0;
}


