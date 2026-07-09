#include<iostream>
using namespace std;

int main()
{
    const double pi = 3.14;  //编译没有分配空间，pi是右值 
//    double *r_pi = &pi;    //语法错误？ 
    double *p_pi = (double *)&pi;//equal to
//    double temp = pi; double *r_pi = &temp; 
    *p_pi = 4.0;
//请解释输出结果 
    printf("%lf,%lf\n",*p_pi,pi); 
    
//    double &r_pi = pi; //语法错误？
    const double &r_pi = pi; //引用了pi的temp，但无法修改
//    r_pi = 4.0; //语法错误？ 
    double &&rr_pi = (double)pi; //（右值）引用了pi的temp，但可修改
    rr_pi = 5.0;
//请解释输出结果 
    printf("%lf,%lf,%lf,%lf\n",*p_pi,r_pi,rr_pi,pi); 
}
