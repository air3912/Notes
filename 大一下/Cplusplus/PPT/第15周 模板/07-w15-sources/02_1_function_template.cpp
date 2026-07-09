#include <iostream> 
#include <string>
#include <typeinfo>

using namespace std;

template <typename T>
void Swap( T& v1, T& v2)
{
    T temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
    cout << typeid(T).name() << " >> " << 
		v1 << "-" << v2 << endl;
}
/* 
//  EX2：函数模板指定特殊 
template <>
void Swap( int & v1, int & v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
    v1 += 10;
    v2 += 10;
}
*/
int main()
{
    string s1("rabbit"), s2("bear");
    int iv1 = 3, iv2 = 5;
    double dv1 = 2.8, dv2 = 8.5;

    // 调用函数模板的实例Swap(string&, string&)
    Swap(s1, s2);	
    // 调用函数模板的实例Swap(int&, int&)
    Swap(iv1, iv2);	 
    // 调用函数模板的实例Swap(double&, double&)
    Swap(dv1, dv2);
    
    // EX1:不进行常规隐式类型转换，该调用报错
//    Swap(iv1, dv2);

    // 显式实例化，显式指定模板形参的类型
//    Swap <int> (iv1, iv2);
//    Swap <double> (dv1, dv2);

    return 0;
}
