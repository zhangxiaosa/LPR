#include <stdio.h>

short p;
short q;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
short u[6];

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

int main() {
  if (fn3(1, q))
    ;
}
