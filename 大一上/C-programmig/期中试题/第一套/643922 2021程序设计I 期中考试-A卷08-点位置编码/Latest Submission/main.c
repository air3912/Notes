#include <stdio.h>

int main(void)
{
    float x,y;
    int a=0,b=0,c=0,d=0,total;
    scanf("%f %f",&x,&y);
    if(x>1)  c=1;
    else if(x<0)  d=1;
    if(y>1)  a=1;
    else if(y<0)  b=1;
    total=a*8+b*4+c*2+d;
    printf("%d",total);
}