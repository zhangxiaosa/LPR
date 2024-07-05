
#include <stdlib.h>

long fn2() {
  long f = {fn1};
  return f;
}

int main() {
  long result = fn2();
  return 0;
}
