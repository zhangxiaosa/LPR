#include <stdint.h>

int fn1(int p1, int p2) { return p1 ? p1 : p2; }

struct i {
  int j;
  int l;
};

unsigned int m[4];
struct i n[2];

int fn3() {
  struct i v = {0x15};
  for (;;) {
    for (unsigned int s = 0; s <= 39; ++s) {
      for (v.j = 0; v.j <= 2; v.j += 1) {
        n[0].j = v.j;
        v.l = m[v.j];
        int w = fn1(n[0].l, 2);
        for (int a = w; a; a -= 4) {
          n[0].j = v.j;
        }
      }
    }
  }
  return 0;
}

int main() {}
