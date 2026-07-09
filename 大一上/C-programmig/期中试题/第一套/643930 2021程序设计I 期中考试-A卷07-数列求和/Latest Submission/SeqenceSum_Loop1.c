#include <stdio.h>

int main(void)
{
    int n,a0=1,i,an,am=0,sn=0;
    scanf("%d",&n);
    am=a0;
    for(i=0;i<n;i++)
    {
        an=am+i;
        am=an;
        sn+=an;
    }
    printf("%d",sn);
    return 0;
}