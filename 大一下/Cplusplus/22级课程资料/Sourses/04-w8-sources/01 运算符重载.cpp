#include<bits/stdc++.h>
using namespace std;

class Integer {
    int x;
public:
    Integer(int x=0):x(x)   {
    }
    Integer operator + (const Integer& Int) {   
        return Integer(x+Int.x);
    }
    Integer operator - (const Integer& Int) {
        return Integer(x-Int.x);
    }
    Integer operator - () {
        return Integer(-x);
    }
    void print() {
        cout<<x<<endl;
    }
};

int main()  {
    Integer a=3,b=4;
    a.print();
    b.print();
    Integer c=a+b;
    c.print();
    Integer d=a-b;
    d.print();
    Integer e=-a;
    e.print();
    //问题：以下依据哪个语法是正确的 
//    d = a + 4;
//    e = 4 + a; 
    //请问形参类型是 T& 上述哪些语法是正确的
    //请问形参类型是 T 上述哪些语法是正确的 
    return 0;
}



