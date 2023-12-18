#include <iostream>

short p;
short q;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
short u[6];

int fn3(int p1, int p2) {
  return p2 == 0 || p1 && p2 ? p1 : p1 % p2;
}

static short fn7(short p1) {
  int ac;
  ac = fn3(p1, q);
  if (s) {
    unsigned ah;
    for (; p1 >= 4; p1 -= 4) {
      // Loop body (unrolled)
    }
    if (p1) {
      // Regular loop
    }
  } else {
    t[2][0] = fn3(fn3(0, q), 0x9CFB623FL);
  }
  return p1;
}

static void fn8() {
  if (fn7(1)) {
    // Do something
  }
}

int main() {
  fn8();
}