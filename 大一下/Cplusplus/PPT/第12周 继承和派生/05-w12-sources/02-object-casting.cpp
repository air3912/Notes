#include<iostream>
using namespace std;

class BASE {
protected:
	int x;
public:
	BASE(int x=1):x(x) {};
	void print() {
		cout << x << endl;
	};
};

class DERIVED:public BASE {
	int y;
public:
	DERIVED(int y=2,int x=0):BASE(x),y(y) {}; 
	void print() {
		cout << x << "," << y << endl;
	};	
};

class IndirectDerived:public DERIVED {
	int z = 10;
public:
	void print() {
		cout << x << "," << z << endl;
	};
};

void func(BASE &r) {
	r.print();
};

void func(const int &p) {
	int &q = (int &)p;
	q = 21;
}

void func(int *p) {
	*p = 31;
	cout << *p << endl;
}

int func(){		
//   const int i = 100;
//   const int *p = &i;
//   int *q = const_cast<int*>(p);
//   int j = i;
//   *q = 10;
//
//   cout << i << endl << j<<endl 
//	<< *p << endl  << *q <<endl;
//  return 0;

//   const int i = 100;
//   const int &p = i;
//   int &q = const_cast<int&>(p);
//   int j = i;
//
//   cout << i << endl << j << endl
//	<< p << endl << q <<endl;
//   return 0;

// 修改 q 或 *q 的值，观察打印结果的变化 

//	int *ip;
//	char *cp;
//	void *gp;
//	cp=ip;   
//	ip=cp;
//	cp=gp;
//	gp=cp;
//	cp=reinterpret_cast<char*>(gp);
}



int main() {
	// Object assignment 
	BASE obj1;
	DERIVED obj2;
	obj1 = obj2;
	obj1.print(); // obj1 updated
	//obj2 = obj1;  // error: no match for 'operator=' (operand types are 'DERIVED' and 'BASE')
	*(BASE*)(&obj2) = obj1;  // partial assignment with safe conversion
	obj2.print();
	
	// Pointer or Ref 的继承兼容 
	BASE obj3(5);
	BASE *pB = &obj3;
	pB = &obj2;
	DERIVED *pD = &obj2;
	//pD = &obj1;  //error: invalid conversion from 'BASE*' to 'DERIVED*'
	pB = pD;
	pB->print();
	pD->print();
	
	// 对象作为参数传递，向上类型转换或赋值 
	IndirectDerived obj4;
	func(obj4);
	
	//const类型转换 
	int i = 20;
	func(i);
	cout << i << endl;  // i 被修改 
	const int j = 30;
	func(const_cast<int*>(&j));
	cout << j << endl;  // j 无法被修改 
	
	func();
}
