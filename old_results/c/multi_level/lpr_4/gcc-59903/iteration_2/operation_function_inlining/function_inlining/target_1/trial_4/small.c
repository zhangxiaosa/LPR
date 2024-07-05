#include <iostream>

unsigned m[4];
struct i {
  int j;
  int k;
  int l;
};
struct i n[2];

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int main() {
  struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
    struct i v = {0x15L, -5L};
    int w = 1;
    int a = 1;
    int p3;
    p2.j = 0;
    while (w) {
      for (p3 = 0; p3 <= 39; ++p3) {
        for (p2.j = 0; p2.j <= 2; p2.j += 1) {
          n[0] = v;
          v.l = m[p2.j];
          if (!n[0].j) {
          } else {
            w = (n[0].l > 2 ? n[0].l : n[0].l << 2) && p2.k;
            while (a) {
              n[0] = v;
              a += 1;
            }
          }
        }
      }
      w += 1;
    }
    return p2;
  }
}