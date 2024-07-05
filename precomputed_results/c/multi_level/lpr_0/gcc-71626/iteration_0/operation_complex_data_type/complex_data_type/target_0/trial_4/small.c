#include<stdio.h>
void fn1_() {}

long fn2() {
  long c = (long)&fn1_;
  long c1 = ((long*)(&c))[0];
  long c2 = ((long*)(&c))[1];
  return ((long)c2 << 32) | c1;
}
