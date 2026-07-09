#include <stdio.h>

int main() {
    int x, y, t;
    unsigned n = 0;
    char c;
    scanf("%d %d %c", &x, &y, &c);
    for (scanf("%c", &c); c != '\n'; scanf("%c", &c)) {
        if ('0' <= c && c <= '9')
            t = c - '0';
        else
            t = c - 'A' + 10;
        n = n * x + t;
    }

    unsigned m = 1;
    while (m < n / y)
        m *= y;
    while (m > 0) {
        t = n / m;
        n %= m;
        m /= y;
        if (t < 10)
            printf("%c", t + '0');
        else
            printf("%c", t - 10 + 'A');
    }
    printf("\n");
    return 0;
}
