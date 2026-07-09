#include<iostream> 
#include "public.hpp" 
using namespace std; 
using namespace sysu_cplus;
 
// 程序的主函数 
int main( ) { 
    Line line; 
    // 设置长度 
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl; 
    // 不使用成员函数设置长度 
    line.length = 10.0; 
    // OK: 因为 length 是公有的
    cout << "Length of line : " << line.length <<endl; 
    // Error: 破坏包装的后果 
    line.length = -10.0;
    cout << "Length of line : " << line.getLength() <<endl;
    return 0; 
}

