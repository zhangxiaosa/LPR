#include <stdio.h>

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int n_0_j;
int n_0_k;
int n_0_l;
unsigned m[4];

void fn2(int p1, int p2_j, int p2_k, unsigned p3, short p4) {
  int v_j;
  v_j = 0x15L;
  int w;
  int a;
  if (p4 ^ -5L) {
    // Do nothing
  } else {
    v_j = 0;
  }
  for (; w; w += 1) {
    for (p3 = 0; p3 <= 39; ++p3) {
      for (n_0_j = 0; n_0_j <= 2; n_0_j += 1) {
        n_0_j = v_j;
        n_0_k = 5L;
        if (!n_0_j) {
          // Do nothing
        } else {
          w = fn1(n_0_l, 2) && p2_k;
          for (; a; a += 4) {
            n_0_j = v_j;
          }
          n_0_l = m[n_0_j];
        }
      }
    }
  }
}

unsigned fn3(unsigned p1) {
  unsigned char q[7][7];
  if (fn2(p1, n_0_j, n_0_k, 0, q[0][0]), p1) {
    // Do nothing
  }
  return p1;
}

int main() {
  // Program implementation goes here
}
