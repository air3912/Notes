#include<iostream>
#include<string>
using namespace std; 

class Integer {
    int x;
public:
    Integer(int x=0):x(x) {}
    friend Integer operator+(const Integer &lhs, Integer rhs){
        return lhs.x + rhs.x;
    } 
    friend Integer operator+(const Integer &lhs, Integer *rhs){
        if (rhs) return lhs.x + rhs->x + 2000;
        else return lhs.x + 1000;
    }
    friend ostream& operator<<(ostream& o, const Integer &hs) {
        o << hs.x; return o;
    } 
};

class Girlfriend {/* ... */};
void kissGirlfriend(Girlfriend* gf) {cout << "pointer"<<endl;};
void kissGirlfriend(int gfID){cout << "int"<<endl;};

int main() {   
    kissGirlfriend(nullptr);  // 指针类型字面量（viod *）0 
    kissGirlfriend(0); // 尝试 NULL 取代 0 
    
    Integer i1(1), i2;
    i2 = i1 + 0;  // 尝试 1,nullptr,NULL,&i1 取代 0 
    cout << i2 << endl;
}
