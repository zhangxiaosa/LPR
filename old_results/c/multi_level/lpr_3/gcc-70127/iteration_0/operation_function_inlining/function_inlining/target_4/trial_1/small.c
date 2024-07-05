#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

f j;

void fn2(p1) { j = p1; }

struct p {
  c ab;
  signed q : 22;
};

struct r {
  unsigned ab;
  unsigned s;
};

struct r t;

f u;

struct p v[1];

struct p w = {0x1C87E74FL, 816};

a fn6() {
  struct p a = {8L, 666};

  for (a = 0; a >= 0; a -= 1) {
    for (; u <= 1; u += 1) {
      a = v[a] = w;
      v[a] = a;
    }
  }
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

  fn1(j, b);
  return 0;
}