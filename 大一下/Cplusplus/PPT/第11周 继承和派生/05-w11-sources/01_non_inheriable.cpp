#include <string>
#include <iostream>

using std::string;

class MyString : public std::string {
	public:
//		MyString(const char* s): std::string(s) {};	
	// ex3: change access control with using keyword
//		using string::string;
//	private:
//		using string::length;
};
 
int main() {    

    //ex1: 编译，并观看编译日志 
    MyString str1("继承 string(const *char)"); 
    str1 = "继承 string::operator=(...)?";
    std::cout << str1 << std::endl;
    MyString str2 = "hello ";
    std::cout << str2 + str1 << std::endl;
    //ex2: 取消第 6 行注释，编译并运行 
    
    //ex3: 改变访问控制
//	std::cout << str2.size() << std::endl; 
    return 0; 
}

