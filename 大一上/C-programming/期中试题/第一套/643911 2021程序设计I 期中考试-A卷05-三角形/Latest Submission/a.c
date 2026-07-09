#include <stdio.h>

int main(void)
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=i;j++)
            {
                k=i+j;
                if(k%5==0)  printf("5");
                else  printf("*");
            }
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                k=i+j;
                if(k%5==0)  printf("5");
                else printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}