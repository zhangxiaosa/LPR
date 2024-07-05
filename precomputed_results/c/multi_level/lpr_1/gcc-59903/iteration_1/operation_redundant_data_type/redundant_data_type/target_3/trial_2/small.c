#include <stdint.h>

int fn1(unsigned char p1, int p2) {
  return p1 ? p1 : p2;
}

struct i {
  int j;
  int l;
};

unsigned int m[4];
struct i n[2];

int fn3() {
  unsigned int s;
  struct i v = { 0x15 };
  int w;
  int a;
  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (v.j = 0; v.j <= 2; v.j += 1) {
        n[0] = v;
        v.l = m[v.j];
        w = fn1(n[0].l, 2);
        for (; a; a -= 4) {
          n[0] = v;
        }
      }
    }
  }
  return 0;
}

int main() {}
