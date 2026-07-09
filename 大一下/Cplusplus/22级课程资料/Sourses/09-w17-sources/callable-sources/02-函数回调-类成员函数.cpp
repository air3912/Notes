#include<iostream>

typedef int (*FP)(int,int);

class Foo{
public:
    int Add(int lhs,int rhs) {
        return lhs+rhs;
    } 
    
    static int Mul(int lhs,int rhs) {
        return lhs*rhs;
    } 
};

void callback_client(FP f, int a, int b) {
    std::cout << f(a,b) << std::endl;
}

void callback_client(int (Foo::*f)(int,int), Foo &foo, int a, int b) {
    std::cout << (foo.*f)(a,b) + 1000 << std::endl;
}

int main() {
    Foo foo;
    callback_client(foo.Mul, 2, 3);
    callback_client(Foo::Mul, 2, 3);
    //callback_client(foo.Add, 2, 3); //error
    //callback_client(Foo::Add, 2, 3); //error
    callback_client(foo.Add, foo, 2, 3);
    callback_client(Foo::Add, foo, 2, 3);
    // bar 类也有 Add 成员函数 ... 怎么办？ 
}
