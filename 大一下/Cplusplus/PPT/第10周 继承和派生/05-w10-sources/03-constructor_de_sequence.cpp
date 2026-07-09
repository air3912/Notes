#include <iostream>
using namespace std;

class C {
public:
	C();   //构造函数
	~C(); //析构函数
};

class BASE {
public:
	BASE();   // 构造函数
	~BASE();  // 析构函数
};

class DERIVED : public BASE {    // Derived.h
public:
	DERIVED();           // 构造函数
	~DERIVED();         // 析构函数
private:
	C mOBJ;
};

C::C()   //构造函数
{
	cout << "Constructing C object.\n";
}

C:: ~C()  //析构函数
{
	cout << "Destructing C object.\n";
}

BASE::BASE()   // 构造函数
{
	cout << "Constructing BASE object.\n";
}

BASE:: ~BASE()  // 析构函数
{
	cout << "Destructing BASE object.\n";
}

DERIVED::DERIVED()           // 构造函数
{
	cout << "Constructing derived object.\n";
}

DERIVED:: ~DERIVED()         // 析构函数
{
	cout << "Destructing derived object.\n";
}

int main()
{
	DERIVED obj;  // 声明一个派生类的对象
			   // 什么也不做，仅完成对象obj的构造与析构
	return 0;
}

/*
运行结果：
Constructing BASE object.
Constructing C object.
Constructing derived object.
Destructing derived object.
Destructing C object.
Destructing BASE object.
*/
