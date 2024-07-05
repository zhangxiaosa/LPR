#include <iostream>

long fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn2() {
  long c = fn1();
  long f[sizeof(long)/sizeof(long)];
  f[0] = c;
  return *reinterpret_cast<d*>(f);
}

int main() {}
