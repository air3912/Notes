#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a[10000]={0};
    int t=0;
    for(int i=2;i<150000;i++)
    {
        int j;
        for(j=2;j<sqrt(i);j++)
        if(i%j==0) break;
        if(j>sqrt(i))
        a[t++]=i;
        if(a[9999]!=0)
        break;
    }
    long n;
    scanf("%ld",&n);
    int b[100];
    memset(b,0,sizeof(b));
    t=0;
    for(int i=0;i<9999&&n!=1;)
    {
        if(n%a[i]==0) 
        {
            b[t++]=a[i];
            n=n/a[i];
        }
        else i++;
        
    }
    for(int i = 0;b[i]!=0; i++)
    {
       printf("%d ",b[i]);
    }

    return 0;
}