#include<iostream>
#include <exception> 
using namespace std;

class Animal {
    public:
        virtual void eat() {//±ð call ÎÒ
            throw std::exception();  
        };
    protected:
    	Animal() = default;
};

class Dog:public Animal {
    public:
        void eat() {
            cout << "I like bones!" << endl;
        };
        ~Dog() {cout << "auto destructed!\n";};
};

class Cat:public Animal {
    public:
        void eat() {
            cout << "I like fishes!" << endl;
        };
};

class Bear:public Animal {
};

int main() {
	Animal &&ani=Animal(), &&bear=Bear(); 
	ani.eat();
	bear.eat(); 
}
