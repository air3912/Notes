#include <iostream>
class Dummy {
public:
    ~Dummy() {
        std::cout << "Dummy destructed\n";
    }
};

class Triangle {
public:
    Triangle(int a=3,int b=4,int c=5) {
        if (a < 0) { throw a;}
    } 
    ~Triangle() {
        std::cout << "Triangle destructed\n";
    }
private:
    int a,b,c;
};

int main() {
    try {
        Dummy dum;
        //if new or alloc something? 
        Triangle tri(-1);
        std::cout << "Triangle created\n"; 
    }
    catch (...) {
        std::cout << "Exception catched\n"; 
    }
}
