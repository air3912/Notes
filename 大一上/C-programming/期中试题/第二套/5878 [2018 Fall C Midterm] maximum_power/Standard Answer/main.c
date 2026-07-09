#include <stdio.h>

int main() {

    int max_power, max_number;
    const int base = 2;
    int times;
    scanf("%d", &max_number);
    if (max_number <= 0) {
        printf("\nYour input is error!!");
        return 1;
    }
    times = 0;  max_power = 1;
    while ((max_power * base) <= max_number) {
        times = times + 1;
        max_power = base * max_power;
    }
    printf("%d\n", max_power);
    return 0;
}
