#include <stdio.h>

long fn2_f0;
long fn2_f1;
long fn2_f2;
long fn2_f3;
long fn2_f4;
long fn2_f5;
long fn2_f6;
long fn2_f7;

long* fn2_f = &fn2_f0;

long* fn2() {
  return fn2_f;
}

int main() {
  return 0;
}
