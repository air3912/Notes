#include<stdio.h>

int main() {
    long number;
    scanf("%ld", &number);
    long i; 
    for (i = 2; i <= number; i++) {
        if (number % i == 0) {
            printf("%ld ", i);
            number = number / i;
            i--;
        }
    }
    return 0;
}
