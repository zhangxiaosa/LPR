
#include <stdio.h>
#include <time.h>

typedef char b;
int d;
int e;

b fn1() {
  int h = 6L;
  if (e)
    goto i;
  fn1();
  b j;
  return j;
i:
  d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  int h = 6L;
  time_t start_time = clock();
  if (e)
    goto i;
  fn1();
  b j;
  return j;
i:
  d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
  time_t end_time = clock();
  printf("Time taken: %f seconds\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
}
