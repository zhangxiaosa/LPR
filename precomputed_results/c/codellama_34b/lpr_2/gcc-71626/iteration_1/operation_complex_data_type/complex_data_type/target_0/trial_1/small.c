
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {
  return 1;
}

d fn2() {
  d f = {fn1};
  long g = f;
  char str[100];
  sprintf(str, "%ld", g);
  return str;
}

int main() {
  printf("%s\n", fn2());
  return 0;
}
