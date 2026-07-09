/* constractor.hpp */
#pragma once
#include<iostream> 

namespace sysu_cplus { 
    class Line { 
        public: 
            void setLength( double len ); 
            double getLength( void ); 
            Line(); // 这是构造函数 
        private: 
            double length; 
    }; 
}
// 成员函数定义，包括构造函数 
sysu_cplus::Line::Line(void) { 
    std::cout << "Object is being created" << std::endl; 
} 
void sysu_cplus::Line::setLength( double len ) { 
    length = len; 
}
double sysu_cplus::Line::getLength( void ) { 
    return length; 
} 
