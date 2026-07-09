#include<bits/stdc++.h>
using namespace std;

class Integer;
struct Cmp {
    bool operator () (const Integer& a, const Integer& b);
};

class Integer {
    int x;
public:
    // atoi is a stl function that convert a c-string to int
    explicit Integer(const char* s):x(atoi(s))   {
    }
    Integer(int x=0):x(x)   {
    }
    friend Cmp;
};

bool Cmp::operator () (const Integer& a, const Integer& b)   {
    return a.x<b.x;
}

int main()  {
    Integer a("3"), b("4");
    Cmp compare;
    cout<<compare(a,b)<<endl; // of course ok
    // some codes
    cout<<compare(Integer("1"),Integer("2"))<<endl; // explicit construction, ok
    cout<<compare((Integer)"1",(Integer)"2")<<endl; // explicit conversion, ok
    cout<<compare("1","2")<<endl; // error
    cout<<compare("a","b")<<endl; // error
    return 0;
}



