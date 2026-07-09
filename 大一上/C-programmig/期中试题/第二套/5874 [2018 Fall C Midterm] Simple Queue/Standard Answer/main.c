#include <stdio.h>
#define MAX_SIZE 10
#define REAL_SIZE (MAX_SIZE + 1)

int main() {
  int my_queue[REAL_SIZE] = {};
  int front_ptr = 0, rear_ptr = 0;
  int n = 0, action = 0, temp = 0;
  while (scanf("%d", &action) != EOF) {
    if (action == 1) {
      scanf("%d", &temp);
      // push
      if ((rear_ptr + 1) % (REAL_SIZE) != front_ptr) {
        // not full
        my_queue[rear_ptr++ % (REAL_SIZE)] = temp;
        rear_ptr %= REAL_SIZE;
      } else {
        // full
        printf("Push Failed. The queue is full.\n");
      }
    } else {
      // pop
      if (rear_ptr != front_ptr) {
        // empty
        printf("%d\n", my_queue[front_ptr]);
        ++front_ptr;
        front_ptr %= REAL_SIZE;
      } else {
        // not empty
        printf("Pop Failed. The queue is empty.\n");
      }
    }
  }
  return 0;
}
