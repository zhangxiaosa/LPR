
#include <stdint.h>

typedef long d;

d fn1() {
  return 0;
}

d fn2() {
  d f = {fn1};
  return f;
}

int main() {
  return 0;
}
