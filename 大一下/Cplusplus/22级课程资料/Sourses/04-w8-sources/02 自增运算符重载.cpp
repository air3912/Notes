#include<bits/stdc++.h>
using namespace std;

class Integer {
    int x;
public:
    Integer(int x=0):x(x)   {
    }
    Integer& operator ++ () {
        cerr<<"prefix is invoked"<<endl;
        ++x;
        return *this;
    }
    Integer operator ++ (int)  {
        cerr<<"suffix is invoked"<<endl;
        return Integer(x++);
    }
    void print()    {
        cout<<x<<endl;
    }
};

int main()  {
    Integer a=3;
    a.print();
    Integer b=++a;
    a.print();
    b.print();
    Integer c=a++;
    a.print();
    c.print();
    return 0;
}



