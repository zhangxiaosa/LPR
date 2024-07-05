
#include <stdio.h>

int d_length = sizeof(long);
long d_data[d_length];

long fn1() {
  long c = 0;
  return c;
}

long fn2() {
  long c = fn1;
  for (int i = 0; i < d_length; i++) {
    d_data[i] = c;
  }
  return d_data;
}

int main() {
  long c = fn1;
  long d = fn2();
  printf("f[0] = %ld\n", d[0]);
  return 0;
}
