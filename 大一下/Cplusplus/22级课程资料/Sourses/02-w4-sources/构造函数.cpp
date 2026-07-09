#include <iostream> 
#include "constructor.hpp" 
using namespace std; 
using namespace sysu_cplus;

// 程序的主函数 
int main() { 
    Line line; 
    // 设置长度 
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl; 
    return 0; 
}

