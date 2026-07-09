#include <stdio.h>
#define LEFT 1
#define RIGHT 2
#define DOWN 4
#define UP 8

int main() {
    double x,y;
    scanf("%lf%lf",&x,&y);

    double left = 0, right = 1, down = 0, up = 1;
    
    char code = 0;
    if (x < left) code |= LEFT;
    if (x > right) code |= RIGHT;
    if (y < down) code |= DOWN;
    if (y > up) code |= UP;
    
    printf("%d\n", code);
    return 0;
}