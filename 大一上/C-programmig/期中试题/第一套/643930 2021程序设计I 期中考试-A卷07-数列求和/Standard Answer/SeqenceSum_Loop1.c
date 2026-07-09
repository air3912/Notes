#include<stdio.h> 
int main(){
    int x,a0=1,sum=0;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        sum+=a0;
        a0+=i+1;
    }
    printf("%d\n",sum);
 return 0;
}