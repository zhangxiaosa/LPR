
#include <stdint.h>
#include <vector>

typedef long d;

void fn1(uint8_t argc, d* argv) {}

d fn2() {
  uint8_t fn1_argc = 0;
  d fn1_argv[0];
  fn1(fn1_argc, fn1_argv);
  return (d){fn1};
}

int main() {
  d result = fn2();
  return 0;
}
