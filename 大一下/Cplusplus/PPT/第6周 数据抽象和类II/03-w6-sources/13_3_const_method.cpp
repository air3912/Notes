#include <iostream>
using namespace std;

class Test {
public:
	void Test1(int _a)const     //常方法 其中this指针由Test* const--> const Test*const
	{
		std::cout<<"Test()const"<<std::endl;
		a = _a;     //error   常方法不能修改普通成员变量的值
		int d = _a;    //可以访问a，但不能修改a的值
		int e = c;    // const函数访问const成员变量
	}
	void Test2()
	{
		int mf = c;     //普通函数访问const成员变量
		std::cout<< "Test2(int,int)" <<std::endl;   //输出该函数
	}

	Test(int _a,int _b,int _c):a(_a),b(_b),c(_c)//构造函数(常成员只能由初始化表进行初始化）
	{
		std::cout<< "Test(int)" <<std::endl;   //输出该函数
	}
private:
	int a;
	int b;
	const int c; //C++中常变量必须初始化（类中的常变量可以使用构造函数的初始化表进行初始化）
};

int main()
{
	Test tmp(10,20,30);     //调用构造函数生成对象tmp
	tmp.Test1(10);          //const函数访问常数据成员变量
	tmp.Test2();            //普通函数访问常数据成员变量
	return 0;
}
