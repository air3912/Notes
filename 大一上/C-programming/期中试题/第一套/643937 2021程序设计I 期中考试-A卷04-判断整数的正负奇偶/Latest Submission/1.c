#include <stdio.h>

int main(void)
{
    long long int n,k;
    scanf("%lld",&n);
    if(n>=0)
    {
        printf("positive ");
    }
    else
    {
        printf("negative ");
        n=-n;
    }
    
    if(n%2==1)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
    return 0;
}