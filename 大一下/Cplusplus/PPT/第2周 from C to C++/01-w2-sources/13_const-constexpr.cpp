#include <iostream>
#include <array>
using namespace std;

void dis_1( )
{
    //错误，x是只读的变量
    constexpr int x = 1+2+3; 
    array<int, x> myarr{1, 2, 3, 4, 5};
    cout << myarr[1] << endl;
}

void dis_2()
{
    const int x = 5;
    array<int, x> myarr{1, 2, 3, 4, 5};
    cout << myarr[1] << endl;
}

int main()
{
    dis_1(5);
    dis_2();
}

