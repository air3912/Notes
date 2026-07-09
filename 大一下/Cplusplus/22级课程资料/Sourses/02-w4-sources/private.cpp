#include <iostream> 
#include "private.hpp" 
using namespace std;
using namespace sysu_cplus; 

// 程序的主函数 
int main( ) { 
    Box box; 
    // 不使用成员函数设置长度 
    box.length = 10.0; 
    // OK: 因为 length 是公有的 
    cout << "Length of box : " << box.length <<endl; 
    // 不使用成员函数设置宽度 
    // box.width = 10.0; 
    // Error: 因为 width 是私有的 
    // 使用成员函数设置宽度 
	box.setWidth(10.0); 
    cout << "Width of box : " << box.getWidth() <<endl;
    // 请计算并输出面积，保留两位小数
    // 思考，将长度赋值负数，负面后果有哪些？  
    return 0; 
}

