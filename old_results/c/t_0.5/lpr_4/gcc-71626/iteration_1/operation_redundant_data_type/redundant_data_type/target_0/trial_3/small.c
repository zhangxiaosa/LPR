#include <stdio.h>

long fn2() {
  long c = 0; // Assign a specific value to `c`
  long f = c; // Use `long` instead of `d`
  return f;
}

int main() {
  return 0;
}
