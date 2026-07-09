/***********************
运行环境： dev c++ + EGE
EGE官网:   https://xege.org/
EGE下载:   ege20.08_all 
程序说明：
    本程序展示图形动画框架的使用 
************************/ 
#include<iostream>
#include<math.h>
#include"graphical_dynamic_framework.hpp" 

class SimuFrame: public SimulationSystemSimpleAbstractFramwork {
    //定义仿真环境变量 
    double alpha;
    int r;
    int delta;
    int sign; 
    int x0,y0;
    
    Point* p; 
    Circle* circle;
    
    void init() {
        p = new Point(0,0);
        circle = new Circle(0,0,10);
        
        alpha = 0;
        r = 100;
        delta = 1;
        sign = 1;
        x0=300,y0=200;        
    }
    
    void tick() {
        //模型计算 
        alpha += 0.02;  
        if (alpha > PI * 2) {
            sign = -sign;
            alpha -= PI * 2; 
        }
        int x = x0 - r*cos(alpha);
        int y = y0 + r*sin(alpha);
        
        p->moveTo(x,y);
        circle->moveTo(x0,y0);
        circle->expand(sign*delta);            
    }
} my_frame;

int main() { 
    my_frame.run();
    return 0;
}


