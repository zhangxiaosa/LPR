#include <stdio.h>

int fn2(int p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1 + p2; }

int p;
short q;

unsigned s = 0x03F238A4L;
unsigned t2;

unsigned fn7(short p1) {
  int ac;
  ac = fn3(p1, p);
  if (s) {
    unsigned aj[3];
    t2 = fn3(aj[1], q);
  }
  return p1;
}

int main() {
  if (fn7(1))
    ;
}
