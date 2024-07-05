#include <stdio.h>

unsigned m[4];

int n[2][3];

char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int fn2(int p1, int p2[3], unsigned p3, short p4) {
  int v[2] = {0x15, -5};
  int w;
  int a;
  
  if (p4 ^ v[1]) {
    // do nothing
  } else {
    v[0] = n[1][0];
    v[1] = n[1][1];
    v[2] = n[1][2];
  }

  for (; w; w += 1) {
    for (p3 = 0; p3 <= 39; ++p3) {
      for (p2[0] = 0; p2[0] <= 2; p2[0] += 1) {
        n[0][0] = v[0];
        n[0][1] = v[1];
        n[0][2] = v[2];
        
        if (!n[0][0]) {
          // do nothing
        } else {
          w = fn1(n[0][2], 2) && p2[1];
          
          for (; a; a += 1) {
            n[0][0] = v[0];
            n[0][1] = v[1];
            n[0][2] = v[2];
          }
        }
      }
    }
  }

  return p2[1];
}

int fn3(int p1) {
  unsigned char q[7][7];
  
  if (fn2(p1, n[0], 0, q[0][0]), p1) {
    // do nothing
  }

  return p1;
}

int main() {
  // main function body
}