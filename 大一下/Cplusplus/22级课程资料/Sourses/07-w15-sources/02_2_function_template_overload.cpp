#include <iostream>
#include <string>

using namespace std;
// 函数模板demoPrint
template <typename T>
void demoPrint(const T v1, const T v2)
{
    cout << "the first version of demoPrint()" << endl;
    cout << "the arguments: " << v1 << " " << v2 << endl;
    cout << endl;
}
// 函数模板demoPrint的指定特殊
template <>
void demoPrint(const char v1, const char v2)
{
    cout << "the specify special of demoPrint()" << endl;
    cout << "the arguments: " << v1 << " " << v2 << endl;
    cout << endl;
}
// 函数模板demoPrint重载的函数模板
template <typename T>
void demoPrint(const T v)
{	
    cout << "the second version of demoPrint()" << endl;
    cout << "the argument: " << v << endl;
    cout << endl;
}
// 非函数模板demoPrint
void demoPrint(const double v1, const double v2)
{	
    cout << "the nonfunctional template version of demoPrint()" << endl;
    cout << "the arguments: " << v1 << " " << v2 << endl;
    cout << endl;
}

int main()
{
    string s1("rabbit"), s2("bear");
    char c1('k'), c2('b');
    int iv1 = 3, iv2 = 5;
    double dv1 = 2.8, dv2 = 8.5;
    // 调用第一个函数模板
    demoPrint(iv1, iv2);
    // 调用第一个函数模板的指定特殊
    demoPrint(c1, c2);
    // 调用第二个函数模板
    demoPrint(iv1);
    // 调用非函数模板
    demoPrint(dv1, dv2);
    // 隐式转换后调用非函数模板
    demoPrint(iv1, dv2);    

    return 0;
}
