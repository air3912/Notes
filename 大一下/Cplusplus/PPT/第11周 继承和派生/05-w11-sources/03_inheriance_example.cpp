#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class BASE {
public:
    BASE(int p1, int p2);
    int inc1();
    int inc2();
    void display();

private:
    int mem1, mem2;
};

class DERIVED : public BASE {
public:
    DERIVED(int x1, int x2, int x3, int x4, int x5); 		
    int inc1();
    int inc3();
    void display();

private:
    int mem3;
    BASE mem4;
};

BASE::BASE(int p1, int p2)
{
    mem1 = p1; mem2 = p2;
}

int BASE::inc1() { return ++mem1; }

int BASE::inc2() { return ++mem2; }

void BASE::display()
{
    cout << "mem1 = " << mem1 << ", mem2 = " << mem2 << endl; 
}

DERIVED::DERIVED(int x1, int x2, int x3, int x4, int x5) : BASE(x1, x2), mem4(x3, x4)
{
    mem3 = x5;
}

int DERIVED::inc1() { return  BASE::inc1(); }

int DERIVED::inc3() { return ++mem3; }

void DERIVED::display()
{
    BASE::display();
    mem4.display();
    cout << "mem3 = " << mem3 << "\n";
}

int main()
{
    DERIVED obj(17, 18, 1, 2, -5);
    obj.inc1();
    obj.display();
    return 0;
}


