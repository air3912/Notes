#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        printf(" ");
        if(i!=n-1)
        printf("*");
        for(int j=0;j<(n-i-1)*2-1;j++)
        printf(" ");
        if(i!=0)
        printf("*");
        for(int j=0;j<2*i-1;j++)
        printf(" ");
        if(i!=n-1)
        printf("*");
        for(int j=0;j<(n-i-1)*2-1;j++)
        printf(" ");
        printf("*");
        printf("\n");
    }

    return 0;
}