#include<iostream>
#include<functional>

typedef std::function<int (int,int)> FP;

class Foo{
public:
    int Add(int lhs,int rhs) {
        return lhs+rhs;
    } 
 
    static int Mul(int lhs,int rhs) {
        return lhs*rhs;
    }
    
    int operator()(int lhs,int rhs) {
        return this->Add(lhs,rhs);
    } 
};

void callback_client(FP f, int a, int b) {
    std::cout << f(a,b) << std::endl;
}

int main() {
    using namespace std::placeholders;  // for _1, _2, _3...
 
    Foo foo;
    callback_client(foo.Mul, 2, 3);
    callback_client(Foo::Mul, 2, 3);
    
    auto f = std::bind(foo.Add,&foo,_1,_2);
    callback_client(f, 2, 3);  
    callback_client(foo, 2, 3);  //函数对象，更方便 
}
