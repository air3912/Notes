#include <stdio.h>

int main(void)
{
    int head,leg,rabbits,hens;
    scanf("%d %d",&head,&leg);
    if(leg%2==1 || head<=0 || leg<=0)  printf("Error");
    else
    {
        rabbits=leg/2-head;
        hens=head-rabbits;
        if(hens<0 || rabbits<0)  printf("Error");
        else  printf("%d %d",hens,rabbits);
    }
    return 0;
}