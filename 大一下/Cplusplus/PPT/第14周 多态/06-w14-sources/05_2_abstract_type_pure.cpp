#include<iostream>

using namespace std;

class Animal {
    public:
        virtual void eat() = 0;
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
	Cat &&ani=Cat();
	Dog &&bear=Dog(); 
	ani.eat();
	bear.eat(); 
}
