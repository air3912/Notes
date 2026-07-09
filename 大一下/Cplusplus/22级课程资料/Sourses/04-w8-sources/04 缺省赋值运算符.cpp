#include<bits/stdc++.h>
using namespace std;

class Integer {
    int x;
public:
    Integer(int x=0):x(x)   {
    }
    void print()    {
        cout<<x<<endl;
    }
};

int main()  {
    Integer a=3, b;
    a.print();
    b=a; // default operator ++
    b.print();
    return 0;
}



