/* public.hpp */
#pragma once
#include<stdexcept> 

namespace sysu_cplus {
    class Line { 
        public: 
            double length; 
            void setLength( double len );     
            double getLength( void ); 
    }; 

}
// 成员函数定义 
double sysu_cplus::Line::getLength(void) { 
    return length ; 
} 
void sysu_cplus::Line::setLength( double len ) { 
    if (len < 0) 
        throw std::out_of_range("Invalid parameter len！");
    length = len; 
} 
