#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

struct p {
  c ab;
  signed q : 22;
};

struct r {
  unsigned ab;
  unsigned s;
};

struct p w = {0x1C87E74FL, 816};

a fn6() {
  struct p a = {8L, 666};

  for (int p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
  
  // Inline of fn5
  struct p a = {8L, 666};

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
  // End of inline fn5
}

int main() {
  int i;
  int b = 0;
  fn6();

  for (i = 0; i < 1; i++) {
    j = v[i].q;
    // Inline of fn4
    j = v[i].q;
    // End of inline fn4
  }
  
  // Inline of fn1
  printf("checksum = %X\n", j);
  // End of inline fn1
  
  return 0;
}