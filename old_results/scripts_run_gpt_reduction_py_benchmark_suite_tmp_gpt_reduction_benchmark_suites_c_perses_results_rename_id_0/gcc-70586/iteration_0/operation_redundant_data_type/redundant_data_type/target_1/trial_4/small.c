#include <stdio.h>

int fn2(int p1, unsigned int p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned int fn4(unsigned int p1, int p2) {}

unsigned int fn5(unsigned int p1, unsigned int p2) { return p1 + p2; }

int main() {
  if (fn7(1))
    ;
}
