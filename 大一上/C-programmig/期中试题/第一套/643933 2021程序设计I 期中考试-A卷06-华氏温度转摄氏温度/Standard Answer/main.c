#include <stdio.h>

int main() {
    double f,d;
    scanf("%lf",&f);
    // printf("%lf\n",f);
    if (-4 <= f && f <= 120) {
        d = (f-32) * 5 / 9;
        printf("%.2lf\n",d);       
    } 
    else {
        printf("invalid input!\n");
    };
}