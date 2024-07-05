
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn13() {
  int al = 3;
  int an = 250;
  int t = 0;
  int ao = 0xBCD1;
  for (int w = 3; w; w--) {
    an = w;
    if (fn2(ao - an, t) & 1) {
      v_int = 1;
    }
  }
  return al;
}

int main() {
  fn13();
  printf("checksum = %d\n", v_int);
  return 0;
}
