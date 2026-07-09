#include <iostream>

class Fruit{
public:
    void say() {
        printf("I'm a fruit!\n");
    }
};

class Apple : public Fruit{
};
class Banana : public Fruit{
};
class Cherry : public Fruit{
};

int main(){
    Apple a;
    Banana b;
    Cherry c;
    a.say();
    b.say();
    c.say();
}
