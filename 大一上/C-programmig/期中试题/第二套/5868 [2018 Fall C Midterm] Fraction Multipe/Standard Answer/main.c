#include <stdio.h>

int GCD(int lhs, int rhs) {
  int gcd = 0;
  if (lhs && rhs) {
    while (lhs % rhs) {
      gcd = lhs % rhs;
      lhs = rhs;
      rhs = gcd;
    }
  }
  return rhs;
}


void printFraction(int nume, int deno) {
  if (deno == 0) {
    puts("Not A Number");
    return;
  } else if (nume == 0) {
    puts("0");
    return;
  }
  int gcd = GCD(nume, deno);
  nume /= gcd, deno /= gcd;
  if (deno == 1) {
    printf("%d\n", nume);
  } else {
    printf("%d/%d\n", nume, deno);
  }
}

int main() {
  int nume_a = 0, deno_a = 0, nume_b = 0, deno_b = 0;
  int numerator = 0, denominator = 0;
  int test = 0;
  scanf("%d", &test);
  while (test--) {
    scanf("%d%d%d%d", &nume_a, &deno_a, &nume_b, &deno_b);
    numerator = nume_a * nume_b;
    denominator = deno_a * deno_b;
    printFraction(numerator, denominator);
  }
}