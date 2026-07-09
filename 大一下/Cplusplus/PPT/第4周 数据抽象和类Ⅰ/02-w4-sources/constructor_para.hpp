/* constructor_para.hpp */
#pragma once
#include <iostream> 

namespace sysu_cplus {
    class Line { 
        public: 
            Line(double len); //构造函数 
            void setLength( double len );     
            double getLength( void );
        private: 
            double length; 
    }; 
}

// 成员函数定义，包括构造函数 
sysu_cplus::Line::Line(double len) { 
    length = len;
    std::cout << "Object is being created, length = " << len << std::endl; 
} 
void sysu_cplus::Line::setLength( double len ) { 
    length = len; 
}
double sysu_cplus::Line::getLength( void ) { 
    return length; 
} 
