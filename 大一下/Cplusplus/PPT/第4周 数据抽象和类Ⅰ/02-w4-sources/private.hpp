/* private.hpp */
#pragma once
#include<stdexcept>

namespace sysu_cplus {
    class Box { 
        public: 
            double length; 
            void setWidth( double wid ); 
            double getWidth(void) const; 
            double getArea();
        private: 
            double width; 
    }; 
}
// 在函数定义中，我们如何区别 namespace名和类名？ 
double sysu_cplus::Box::getWidth(void) const{ 
    return width ; 
} 
void sysu_cplus::Box::setWidth(double w) { 
    if (w<0) throw std::invalid_argument("invalid w < 0."); 
    width = w; 
}
// 请给出面积计算的实现 
// 请课后改写该类的声明，使得包装逻辑正确 
