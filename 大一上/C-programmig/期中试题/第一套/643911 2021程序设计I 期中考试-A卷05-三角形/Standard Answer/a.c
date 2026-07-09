#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; ++i)
    {
        char ch=(i & 1? '*':'#');
        for (int j=1; j<=i; ++j) putchar((i+j)%5==0? '5':ch);
        putchar('\n');
    }
    return 0;
}