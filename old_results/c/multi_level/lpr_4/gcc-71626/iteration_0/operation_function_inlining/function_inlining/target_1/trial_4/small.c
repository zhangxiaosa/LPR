#include <stdio.h>
typedef long a;

void fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));



int main() {
  d f = {};
  return 0;
}
