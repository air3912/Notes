#include<iostream>
#include <exception> 
using namespace std;

class Animal {
    public:
        virtual void eat() {//别 call 我
            throw std::exception();  
        };
    protected:
    	Animal() = default;
};

class Dog: public Animal {
    public:
        void eat() {
            cout << "I like bones!" << endl;
        };
        ~Dog() {cout << "auto destructed!\n";};
};

class Cat: public Animal {
    public:
        void eat() {
            cout << "I like fishes!" << endl;
        };
};

class Bear:public Animal {
	public:
        void eat() {
            cout << "I like fishes!" << endl;
        };
};

int main() {
	Animal &&ani=Cat();
	Animal &&bear=Bear(); 
	ani.eat();
	bear.eat(); 
}
