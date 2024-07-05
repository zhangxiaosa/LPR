#include <stdio.h>

void fn1() {}

typedef long d __attribute__((__vector_size__(sizeof a)));

int main() {
  long c = (long)fn1;
  d f = {c};
  return f;
}