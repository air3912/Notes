#include <iostream>
#include <cstdio>
using namespace std;

class Base {
public:
	void display();
};

class D1 : public Base {
public:
	void display();
};

class D2 : public D1 {
public:
	void display();
};

void Base::display()
{
	cout << "Base::display()" << endl;
}

void D1::display()
{
	cout << "B2::display()" << endl;
}

void D2::display()
{
	cout << "D2::display()" << endl;
}

// Ex：请将参数改为传引用 
void fun(Base* ptr)
{
	ptr->display();
}

int main()
{
	Base b;	//声明B0类对象
	D1 d1;	      	//声明D1类对象
	D2 d2;	      	//声明D2类对象
	Base* p;	//声明Base类指针
	p = &b;	      	//Base类指针指向Base类对象
	fun(p);
	p = &d1;		//Base类指针指向D1类对象
	fun(p);
	p = &d2;		//Base类指针指向D2类对象
	fun(p);
}
