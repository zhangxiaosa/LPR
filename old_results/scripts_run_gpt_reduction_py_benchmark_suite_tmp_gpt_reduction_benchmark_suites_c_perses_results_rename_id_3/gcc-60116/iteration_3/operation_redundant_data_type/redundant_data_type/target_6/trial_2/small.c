#include <stdio.h>

int v;
unsigned ai;

unsigned fn2(unsigned p1, unsigned p2) { return p1 && p2 ? p1 : p1 % p2; }
unsigned fn3(unsigned p1, unsigned p2) { return p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
unsigned fn8(unsigned p1, unsigned p2) { return p1 + p2; }

int main() {
  for (unsigned ak = 0;;) {
    for (unsigned ai = 0; ai <= 3; ai += 1) {
      if (ai >= (fn7(4, fn7(4, fn5(ai, ai = fn8(~(fn3(0, fn2(v, 1)) != 0), ak) && 0x57))) > 2)) {
        v = 0x41AEA787;
      }
    }
    printf("checksum = %u\n", v);
  }
}