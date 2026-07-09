#include <stdio.h>

int main(void)
{
    double r,h,s,v,pi=3.14;
    scanf("%lf %lf",&r,&h);
    s=r*r*pi;
    v=s*h/3;
    printf("%.2lf",v);
    return 0;
}