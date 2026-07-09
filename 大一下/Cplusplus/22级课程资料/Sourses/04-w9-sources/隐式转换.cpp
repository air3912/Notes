#include<iostream>
#include<string>
using namespace std; 

class Integer {
    int x;
public:
    Integer(int x=0):x(x) {}
    friend Integer operator+(const Integer &lhs,const Integer &rhs){
        return lhs.x + rhs.x;
    }
    friend ostream& operator<<(ostream& o, const Integer &hs) {
        o << hs.x;
        return o;
    } 
};

int main() {
    string s;
    s = "Hello";
    cout << s << endl;
    
    Integer i1(3), i2;
    i2 = 1.1 + i1;
    cout << i2 << endl;
}
