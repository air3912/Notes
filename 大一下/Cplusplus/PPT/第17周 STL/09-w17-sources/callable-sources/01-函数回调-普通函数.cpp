#include<iostream>

typedef int (*FP)(int,int);

int Add(int lhs,int rhs) {
    return lhs+rhs;
} 

int Mul(int lhs,int rhs) {
    return lhs*rhs;
} 

void callback_client(FP f, int a, int b) {
    std::cout << f(a,b) << std::endl;
}

int main() {
    callback_client(Add, 2, 3);
    callback_client(Mul, 2, 3);
}
