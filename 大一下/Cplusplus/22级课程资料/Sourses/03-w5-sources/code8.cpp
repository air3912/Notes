#include <iostream>
using namespace std;

class A
{
public:
    A(int x) {
        cout << "This is a parameterized constructor";
    }
    A() = default;
};

A::A() {
    cout << "new constructor" << endl
} 

int main(){
    A a;          //call A()
    A x(1);       //call A(int x)
    cout<<endl;
    return 0;
}
