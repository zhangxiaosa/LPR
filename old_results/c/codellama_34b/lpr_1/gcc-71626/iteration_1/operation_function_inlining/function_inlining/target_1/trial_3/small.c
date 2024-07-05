
#include <stdlib.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = /* code for fn1 */;
  d f = {c};
  return f;
}

int main() {
  d result = fn2();
  return 0;
}
