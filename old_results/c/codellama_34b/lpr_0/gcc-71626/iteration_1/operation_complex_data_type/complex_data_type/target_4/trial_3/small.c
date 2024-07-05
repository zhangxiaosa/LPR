
#include <stdint.h>

typedef long d[sizeof(long)];

void fn1(void) {}

d fn2(void) {
  uint8_t fn1_argc = 0;
  long fn1_argv[0] = {0};
  fn1(fn1_argc, fn1_argv);
  return (d){fn1};
}

int main(void) {
  d result = fn2();
  return 0;
}
