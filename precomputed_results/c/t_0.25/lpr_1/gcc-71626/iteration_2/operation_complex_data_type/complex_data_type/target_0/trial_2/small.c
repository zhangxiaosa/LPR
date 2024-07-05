#include <stdio.h>

long fn2() {
  long f[2];
  f[0] = fn1;
  f[1] = fn1;
  return f;
}

int main() {
  // Main function body
}