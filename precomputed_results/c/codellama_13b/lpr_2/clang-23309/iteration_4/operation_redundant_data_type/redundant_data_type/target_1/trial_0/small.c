
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn3(int p1, int p2) {
  return p1 - p2;
}

int fn4(int p1, int p2) {
  return p1;
}

int fn5(int p1, int p2) {
  return p2;
}

int fn6(int p1, int p2) {
  return p1 - p2;
}

int fn12(int p1, int p2, int p3, int p4) {
  for (int w = 3; w; w -= 1) {
    int an = 250;
    p2 = fn5(p2, p4) || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, fn4(fn6(1, an), 0xE)), p2) & 1)
      return 1;
  }
  return 3;
}

int fn13() {
  return fn12(2, 248, 3, 0x2F2F6D26);
}

int main() {
  int value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}
