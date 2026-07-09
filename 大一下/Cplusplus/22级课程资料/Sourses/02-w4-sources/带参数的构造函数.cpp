#include <iostream>
#include "constructor_para.hpp" 
using namespace std; 
using namespace sysu_cplus;

// 程序的主函数 
int main( ) { 
    Line line(10.0);  //Line line = 10.0; //Line line{10.0} 
	Line line1;  //Error，没有默认构造 
    // 获取默认设置的长度 
    cout << "Length of line : " << line.getLength() <<endl; 
    // 再次设置长度 
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl;    
    return 0; 
}

