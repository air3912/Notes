#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int random = -1;

int randint(int low, int high) {
  if (high < low) {
    high ^= low;
    low ^= high;
    high ^= low;
  }
  unsigned int temp = 0;
  read(random, &temp, sizeof(temp));
  return temp % (high - low) + low;
}

int main() {
  random = open("/dev/urandom", O_RDONLY);
  int test = randint(1, 20);
  printf("%d\n", test);
  while (test--) {
    printf("%d %d\n%d %d\n", randint(0, 50), randint(0, 50), randint(0, 50),randint(0, 50));
  }
  close(random);
}