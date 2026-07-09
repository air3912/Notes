#include <stdio.h>

int main(void)
{
    double f,d;
    scanf("%lf",&f);
    if(f>=-4&&f<=120)
    {
        d=(f-32)*5/9;
        printf("%.2lf",d);
    }
    else  printf("invalid input!");
    return 0;
}