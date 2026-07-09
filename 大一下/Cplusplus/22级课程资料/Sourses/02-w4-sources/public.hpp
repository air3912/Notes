/* public.hpp */
#pragma once

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
    length = len; 
} 
