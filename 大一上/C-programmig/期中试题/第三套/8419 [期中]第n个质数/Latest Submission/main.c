#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[1000]={0};
    int t=0;
    for(int i=2;i<7500;i++)
    {      
        int j;
        for(j=2;j<sqrt(i);j++)
        if(i%j==0) break;
        if(j>sqrt(i))
        a[t++]=i;
    }
    printf("%d",a[n-1]);
    return 0;
}