#include<iostream>
#include<string>
using namespace std;

struct S {
    int n;                    // 非静态数据成员
    int& r = n;               // 引用类型的非静态数据成员; =默认构造
    int a[2] = {1, 2};        // 带默认成员初始化器的非静态数据成员（C++11）
    std::string s{'H','C'};   // 带默认成员初始化器
    struct NestedS  {
          std::string s;
          NestedS(std::string s = "hello"):s(s) {};    //构造函数
    } d5;                     // 具有嵌套类型的非静态数据成员
 
    const char bit : 2;       // 2 位的位域, const 初始化
    
    S():n(7),bit(3) {}        // ":n(7),bit(3)" 是初始化器列表; "{}" 是函数体
    S(int x):n{x},bit(3) {}
};

int main()
{
    S s;      // 调用 S::S()
    S s2(10); // 调用 S::S(int)
}

 
