#include <stdio.h>

void fn1() {}

int main() {
  typedef long d __attribute__((__vector_size__(sizeof a)));
  d f = {fn1};

  return 0;
}