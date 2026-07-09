#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int randomData = 0;

const char *table = "********abcdefghijklnmopqrstuvwxyzABCDEFGHIJKLNMOPQRSTUVWXYZ***************";

unsigned getRandomInt(unsigned from, unsigned to) {
  unsigned res = 0;
  read(randomData, &res, sizeof(res));
  return res % (to - from + 1) + from;
}


int main(int argc, char const *argv[]) {
  randomData = open("/dev/urandom", O_RDONLY);

  int len = strlen(table);

  int size = getRandomInt(1, 100000);

  for (int i = 0; i < size; i++) {
    printf("%c", table[getRandomInt(0, len-1)]);
  }

  printf("\n");
  close(randomData);

  return 0;
}

