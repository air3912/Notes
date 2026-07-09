#include <stdio.h>

int main(void)
{
    double n,total;
    scanf("%lf",&n);
    if(n>=0&&n<=200)  total=0.5*n;
    else if(n>200&&n<=300)  total=100+0.6*(n-200);
    else if(n>300)  total=160+0.8*(n-300);
    printf("%.2lf",total);
    return 0;
}