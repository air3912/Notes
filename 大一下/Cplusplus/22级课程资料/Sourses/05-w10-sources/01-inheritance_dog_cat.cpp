#include <iostream>
using namespace std;

// Basic Define & Initialize & How to workÅ

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
    
    // ex:«Îƒ£∑¬ dog ¿‡£¨ÕÍ≥… Cat ¿‡£¨ πµ√“‘œ¬¥˙¬Î’˝»∑‘À–– 
//    Cat cat;
//    cat.eat();
//    cat.catchMice();
}

