#include <iostream>
 
//分数对象，n是分子，d分母 
class Fraction
{
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    int n, d;
public:
    Fraction(int n, int d = 1) : n(n/gcd(n, d)), d(d/gcd(n, d)) { }
    int num() const { return n; }
    int den() const { return d; }
    Fraction& operator*=(const Fraction& rhs)
    {
        int new_n = n * rhs.n/gcd(n * rhs.n, d * rhs.d);
        d = d * rhs.d/gcd(n * rhs.n, d * rhs.d);
        n = new_n;
        return *this;
    }
    //请你把需要的函数定义和实现写在下边
};
 
std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
   return out << f.num() << '/' << f.den() ;
}

//请你需要的函数实现写在下边 


//请按练习顺序，一步步打开测试检查用代码，培养测试驱动逐步完善程序的习惯！
int main()
{
   Fraction f1(3, 8), f2(2, 4), f3(12, 2);
   //output: 3/8  
   std::cout << f1 << '\n';
   
   // ex1:和你身边的同学结对，分别用成员函数和普通函数重载 * 运算
   // output: 3/8 * 1/2 = 3/16 
//   std::cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n'; 
   
   // ex2:自增运算。算法要求 n++ 
   // output: 1/2 = 1/2
//   Fraction f4 = f1;
//   std::cout << ++f4 << " = " << f4 << '\n'; 
   
   // ex3: 请重载 +=
   // output: 1/2 += 3/8 is 7/8
//   std::cout << f4 << " += " << f1 << " is " ;
//   std::cout << (f4 += f1) << '\n';
   
   // ex4: 用 >> 完成分数的输入，例如 4 2
//   std::cin >> f4;
//   std::cout << f4 << '\n'; 
   
   // ex5: 请正确完成如下运算
   // output： 1/2 + 6/1 = 13/2  \n  2 * 3/8 = 3/4  \n ... 
//   std::cout << f2 << " + " << f3 << " = " << f2 + f3 << '\n'; 
//   std::cout <<  2 << " * " << f1 << " = " <<  2 * f1 << '\n';
//   std::cout <<  2.1 << " * " << f1 << " = " <<  2.1 * f1 << '\n'; 
   
   // 思考：如何制止 double 参与运算？ 
}
