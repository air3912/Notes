#include<bits/stdc++.h>
using namespace std;

class Integer {
    int x;
public:
    Integer(int x=0):x(x)   {
        cout<<"constructing Int "<< x <<endl;
    }
    
    Integer& operator = (const Integer& other) {
        if (this != &other) {
            cout<<"operator= invoked"<<endl;
            x=other.x;
        } 
        return *this;
    }
    
    Integer& operator += (const Integer& other) {
        cout<<"operator+= invoked"<<endl;
        //this->x += other.x;   //[1] 
        *this = this->operator +(other);//[2]  
        return *this;
    }
    
    Integer operator + (const Integer& Int) { 
        cout<<"operator+ invoked"<<endl;  
        return Integer(x+Int.x);
    }  
    
    void print()    {
        cout<<x<<endl;
    }
};

int main()  {
    Integer a=3, b;
    b=5;
    b=a;
    b+=b;
    return 0;
}



