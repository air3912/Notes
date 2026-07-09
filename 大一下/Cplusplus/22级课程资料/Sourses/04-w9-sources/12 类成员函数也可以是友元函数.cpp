#include<bits/stdc++.h>
using namespace std;

class Integer;
struct Cmp {
    bool operator () (const Integer& a, const Integer& b);
};

class Integer {
    int x;
public:
    Integer(int x=0):x(x)   {
    }
    friend bool Cmp::operator () (const Integer& a, const Integer& b);
};

bool Cmp::operator () (const Integer& a, const Integer& b)   {
    return a.x<b.x;
}

int main()  {
    Integer a=3, b=4;
    Cmp compare;
    cout<<compare(a,b)<<endl;
    cout<<compare(b,a)<<endl;
    return 0;
}



