#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int randomData = 0;


unsigned getRandomInt(unsigned from, unsigned to) {
  unsigned res = 0;
  read(randomData, &res, sizeof(res));
  return res % (to - from + 1) + from;
}


int main(int argc, char const *argv[]) {
  randomData = open("/dev/urandom", O_RDONLY);

  printf("%d\n", getRandomInt(0, 100000));

  close(randomData);

  return 0;
}

