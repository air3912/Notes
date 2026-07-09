#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int randint(int random, int low, int high) {
  unsigned int temp = 0;
  read(random, &temp, sizeof(temp));
  return (temp % (high - low)) + low;
}

int main() {
  int random = open("/dev/urandom", O_RDONLY);
  int N = randint(random, 50, randint(random, 0, 4) ? 1000 : 100000);
  printf("%d\n", N);
  while (N--) {
    switch (randint(random, 0, 9)) {
      case 0:
        putchar('0');
        break;
      case 1:
      case 5:
        putchar('3');
        break;
      case 2:
      case 6:
        putchar('5');
        break;
      case 3:
      case 7:
        putchar('7');
        break;
      case 4:
      case 8:
        putchar('9');
        break;
      default:
        break;
    }
    putchar(N ? ' ' : '\n');
  }
}