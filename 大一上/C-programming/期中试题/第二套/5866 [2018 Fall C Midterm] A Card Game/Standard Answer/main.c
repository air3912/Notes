#include <stdio.h>

int main() {
  int bucket[10] = {0}, size = 0, temp = 0;
  scanf("%d", &size);
  while (size--) {
    scanf("%d", &temp);
    bucket[temp]++;
  }
  if (bucket[0] != 0 && (bucket[5] * 5 + bucket[7] * 7) % 3 == 0 &&
      (bucket[3] + bucket[5] + bucket[7] + bucket[9] != 0)) {
    for (int i = 0; i < bucket[9]; ++i) {
      putchar('9');
    }
    for (int i = 0; i < bucket[7]; ++i) {
      putchar('7');
    }
    for (int i = 0; i < bucket[5]; ++i) {
      putchar('5');
    }
    for (int i = 0; i < bucket[3]; ++i) {
      putchar('3');
    }
    for (int i = 0; i < bucket[0]; ++i) {
      putchar('0');
    }
    putchar('\n');
  } else {
    puts("no such number");
  }
  return 0;
}