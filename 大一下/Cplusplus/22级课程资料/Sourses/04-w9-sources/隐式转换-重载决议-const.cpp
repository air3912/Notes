#include<iostream>
#include<string>
using namespace std; 

class Integer {
    int x;
public:
    Integer(int x=0):x(x) {}
    friend ostream& operator<<(ostream& o, const Integer &hs) {
        o << "const " << hs.x;
        return o;
    } 
    friend ostream& operator<<(ostream& o, Integer &hs) {
        o << "no_const " << hs.x ;
        return o;
    } 
};

int main() {
    Integer i1(1);
    const Integer i2(2);
    cout << i1 << "," << 3 << "," << i2 << endl;
}
