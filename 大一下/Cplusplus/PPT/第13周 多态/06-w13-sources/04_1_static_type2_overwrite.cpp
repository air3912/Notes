#include <iostream>

class Fruit{
public:
    void say() {
        printf("I'm a fruit!\n");
    }
};

class Apple : public Fruit{
public:
    void say() {
        printf("I'm an apple!\n");
    }
};

class Banana : public Fruit{
public:
    void say() {
        printf("I'm a banana!\n");
    }
};

class Cherry : public Fruit{
public:
    void say() {
        printf("I'm a cherry!\n");
    }
};

int main(){
    Apple a;
    Banana b;
    Cherry c;
    a.say();
    b.say();
    c.say();
}
