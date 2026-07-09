#include <iostream>
using namespace std;

// Basic Define & Initialize & How to work�

class Animal {
    public:
        void eat() {
            isEaten = true;
            cout << "I have eaten!" << endl;
        };
    protected:
        Animal() {cout << "Animal is constructing" << endl;};
        bool isEaten = false;
};

class Dog:public Animal {
    public:
        Dog():Animal() {cout << "Dog is constructing" << endl;};
        void bark(){
            if (isEaten) {
                cout << "I am Barking, wang wang wang" << endl;
            }
            else {
                cout << "I am starving, wow" << endl;
            };
        };
};

int main() {
    Dog dog;
    dog.eat();
    dog.bark();
    
    // ex:请模仿 dog 类，完成 Cat 类，使得以下代码正确运行 
//    Cat cat;
//    cat.eat();
//    cat.catchMice();
}

