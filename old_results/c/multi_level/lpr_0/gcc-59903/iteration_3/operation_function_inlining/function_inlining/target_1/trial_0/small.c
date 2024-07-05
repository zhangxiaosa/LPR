#include <stdio.h>

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int n_0_j;
int n_0_k;
int n_0_l;
struct i {
  int j;
  int k;
};
unsigned m[4];

void fn2(int p1, struct i p2, unsigned p3, short p4) {
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
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n_0_j = v_j;
        n_0_k = 5L;
        if (!n_0_j) {
          // Do nothing
        } else {
          w = fn1(n_0_l, 2) && p2.k;
          for (; a; a += 4) {
            n_0_j = v_j;
          }
          n_0_l = m[p2.j];
        }
      }
    }
  }
}

unsigned fn3(p1) {
  unsigned char q[7][7];
  if (p1) {
    int v_j;
    v_j = 0x15L;
    int w;
    int a;
    short p4 = q[0][0];
    if (p4 ^ -5L) {
      // Do nothing
    } else {
      v_j = 0;
    }
    for (; w; w += 1) {
      for (unsigned p3 = 0; p3 <= 39; ++p3) {
        for (int p2_j = 0; p2_j <= 2; p2_j += 1) {
          n_0_j = v_j;
          n_0_k = 5L;
          if (!n_0_j) {
            // Do nothing
          } else {
            w = fn1(n_0_l, 2) && 0; // Replaced p2.k with 0
          for (; a; a += 4) {
              n_0_j = v_j;
            }
            n_0_l = m[p2_j]; // Replaced p2.j with p2_j
          }
        }
      }
    }
  }
  return p1;
}

int main() {
}
