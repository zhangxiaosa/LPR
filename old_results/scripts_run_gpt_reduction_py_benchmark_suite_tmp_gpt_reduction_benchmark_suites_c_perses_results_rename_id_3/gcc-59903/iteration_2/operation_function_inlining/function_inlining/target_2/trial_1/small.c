#include <stdio.h>

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4];
struct i n[2];

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  
  int v_j = 0x15L;
  int v_l;
  int w;
  int a;

  if (p1 ^ -5L)
    ;
  else
    v_j = n[1].j;

  for (; w; w += 3)
    for (unsigned p3 = 0; p3 <= 39; ++p3)
      for (int p2_j = 0; p2_j <= 2; p2_j += 1) {
        n[0].j = v_j;
        n[0].l = v_l;
        v_l = m[p2_j];

        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && n[0].k;
          for (; a; a += 1) {
            n[0].j = v_j;
            n[0].k = n[0].j;
          }
        }
      }

  return p1;
}

int main() {
  unsigned result = fn3(42);
  printf("%u\n", result);
  return 0;
}