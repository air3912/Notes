#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int h;
    scanf("%d",&h);
    for(int i=0;i<h/2;i++)
    {
        for(int j=0;j<i;j++)
        printf(" ");
        printf("1");
        for(int j=0;j<h/2-i-1;j++)
        printf(" ");
        printf("2");
        for(int j=0;j<h/2-i-1;j++)
        printf(" ");
        printf("3");
        printf("\n");
    }
    for(int i=0;i<h/2;i++)
    printf("8");
    printf("9");
    for(int i=0;i<h/2;i++)
    printf("4");
    printf("\n");
for(int i=0;i<h/2;i++)
    {
        for(int j=0;j<h/2-i-1;j++)
        printf(" ");
        printf("7");
        for(int j=0;j<i;j++)
        printf(" ");
        printf("6");
        for(int j=0;j<i;j++)
        printf(" ");
        printf("5");
        printf("\n");
    }
    return 0;
}