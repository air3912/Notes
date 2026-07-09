#include<bits/stdc++.h>
using namespace std;

class Integer {
    int x;
public:
    Integer(int x=0):x(x)   {
    }
    Integer& operator = (const Integer& Int)    {
        x=Int.x;
        cout<<"function is invoked"<<endl;
        return *this;
    }
    void print()    {
        cout<<x<<endl;
    }
};

int main()  {
    Integer a=3, b;
    a.print();
    b=a;
    b.print();
    return 0;
}



