#include <stdio.h>

void fn1() {}

typedef long d __attribute__((__vector_size__(sizeof a)));

d fn2() {
  d f = {fn1};
  return f;
}

int main() {
  return 0;
}