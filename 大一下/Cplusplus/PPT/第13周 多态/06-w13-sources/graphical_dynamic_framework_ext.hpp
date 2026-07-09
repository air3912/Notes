#pragma once
/***********************
运行环境： dev c++ + EGE
EGE官网:   https://xege.org/
EGE下载:   ege20.08_all 
程序说明：
  扩展图形对象的示例，注意 shape 不能继承 shape 对象。 
************************/ 

#include<string>
#include"graphical_dynamic_framework.hpp" 
using namespace std;

class FiveStar final:public AbstractShape2D {
    double r;
    double a = 0;
    public:
        FiveStar(double x, double y, double r):AbstractShape2D("star") {
            moveTo(x,y); 
            this->r = r;
        };
//modified members
        float getArea() {return 0;}
        float getPerimeter() {return 0;}
        //rotate 是所有图形都具备的功能，如何改？ 
        void rotate(double delta_a) {
            a += delta_a;
        }
        void draw();
};


//ext.cpp
#include<graphics.h>
#include<iostream>
using namespace std;

//---Point--------------------
void FiveStar::draw() {
    if (isVisible()) {
        double x = origin.x;
        double y = origin.y;
        int pt[10];
        for (int n = 0; n < 5; ++n)
        {
            pt[n*2] = (int)( -cos( PI * 4 / 5 * n + a ) * r + x );
            pt[n*2+1] = (int)( sin( PI * 4 / 5 * n + a) * r + y );
        }
        fillpoly(5, pt);
    }
}

