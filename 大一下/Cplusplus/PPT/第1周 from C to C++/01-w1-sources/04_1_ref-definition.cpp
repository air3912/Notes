/* ref-definition.cpp */
#include<iostream>
using namespace std;

int main() {
    int a = 1024;
    int *p = &a; // p是指针; &a是a的地址
    int &x = a;  // x是引用，它实际上与a是同一个变量
    cout << "a = " << a << endl;
    cout << "x = " << x << endl;
    cout << "*p = " << *p << endl;
    x = 2000;
    cout << "a = " << a << endl;
    return 0;
}
 
