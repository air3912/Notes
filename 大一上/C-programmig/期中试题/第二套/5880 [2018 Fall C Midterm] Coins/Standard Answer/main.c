#include <stdio.h>
 
int main() {
    int x1, x2, x3, x4, x5;
    int x;
    scanf("%d", &x);
    x1 = x/50;
    x2 = x%50/10;
    x3 = x%50%10/5;
    x4 = x%50%10%5/2;
    x5 = x%50%10%5%2/1;
    printf("%d\n", x1);
    printf("%d\n", x2);
    printf("%d\n", x3);
    printf("%d\n", x4);
    printf("%d\n", x5);
    return 0;
}
