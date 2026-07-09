#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int h;
    scanf("%d",&h);
    for(int i=1;i<h;i++)
    {
        for(int j=0;j<h-i;j++)
        printf(" ");
        printf("*");
        for(int j=0;j<2*(i-1)-1;j++)
        printf(" ");
        if(i!=1)
        printf("*");
        printf("\n");
    }
    for(int i=0;i<2*h-1;i++)
    printf("*");
    return 0;
}