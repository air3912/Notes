#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int randomData = 0;

int my_random(int lower_bound, int upper_bound) {
  unsigned int rnd;
  read(randomData, &rnd, sizeof(rnd));
  return rnd % (upper_bound - lower_bound + 1) + lower_bound;
}

int main() {
  randomData = open("/dev/urandom", O_RDONLY);

  int n = my_random(1, 100);
  while (n--) {
    int rnd = my_random(1, 10);
    if (my_random(1, 10) <= 3) {
      printf("0\n");
    } else {
      printf("1 %d\n", my_random(-100000, 100000));
    }
  }

  close(randomData);
  return 0;
}
