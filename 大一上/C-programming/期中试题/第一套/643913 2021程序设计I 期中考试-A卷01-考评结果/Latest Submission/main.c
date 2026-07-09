#include <stdio.h>

int main(void)
{
    int a[101];
    int i,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k;i++)
    {
        if(a[i]==10)  printf("Perfect\n");
        if(a[i]==9 || a[i]==8 || a[i]==7)  printf("Excellent\n");
        if(a[i]==6 || a[i]==5 || a[i]==4 || a[i]==3)  printf("Good\n");
        if(a[i]==2 || a[i]==1 || a[i]==0)  printf("Practice makes perfect\n");
    }
    return 0;
}