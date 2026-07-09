#include <iostream>
using namespace std;

class baseA
{
public:
	baseA()
	{
		cout << endl << "This is baseA class." << endl;
	}
};



class baseB
{
public:
	baseB()
	{
		cout << endl << "This is baseB class." << endl;
	}
};



class derivedA : public baseB, virtual public baseA
{
public:
	derivedA()
	{
		cout << endl << "This is derivedA class." << endl;
	}
};



class derivedB : public baseB, virtual public baseA
{
public:
	derivedB()
	{
		cout << endl << "This is derivedB class." << endl;
	}
};



class Derived : public derivedA,virtual public derivedB
{
public:
	Derived()
	{
		cout << endl << "This is Derived class." << endl;
	}
};



int main()
{
	Derived obj;
	return 0;
}

