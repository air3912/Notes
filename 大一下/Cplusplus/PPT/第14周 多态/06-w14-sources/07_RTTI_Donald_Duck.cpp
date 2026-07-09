#include<iostream>
#include<typeinfo>

#define NEW(x) *(new x)
#define DEL(x) delete &x

using namespace std;

class AbstractAnimal {
public:
    virtual void eat() = 0;
    virtual ~AbstractAnimal() {cout << "~Animal" << endl;}
}; 

class Duck:virtual public AbstractAnimal {
public:
    void eat() final {cout << "guagua" << endl;}; 
    ~Duck() {cout << "~Duck" << endl;};
};

class Actor:virtual public AbstractAnimal {
public:
    virtual void play() = 0; 
    ~Actor() {cout << "~Actor" << endl;}
};

class Donald final:public Duck, public Actor {
    //EX1: 类中 eat 和 play 是否都必须实现？ 
    void play() {cout << "Comic" << endl;} 
    ~Donald() {cout << "~Donald" << endl;}
}; 

void dynamic_casting_err() {
    AbstractAnimal* a = new Duck;
    Actor* c = dynamic_cast<Actor*>(a);
    if (!c) {
        cout << "nullptr" << endl;
    }
}

int main() {
    //向上 
    AbstractAnimal& a = NEW(Donald);
    cout << typeid(AbstractAnimal).name() <<","
         << typeid(Donald).name() << endl; 
    cout << typeid(a).name() << endl;
    //向下
    Duck& d = dynamic_cast<Duck&>(a);
    d.eat();
    //侧向 
    Actor& c = dynamic_cast<Actor&>(d);
    c.eat();
    c.play();
    // EX2: Animal 采用正常析构
    // EX3: a 改为 c , 研究虚析构和正常析构的不同 
    DEL(a);
    
    dynamic_casting_err();
} 



