#include <stdio.h>

typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

f j;

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

d fn5(e p1, signed p2, d p3, f p4, f p5) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
}

int main() {
  int b = 0;
  fn5(t.ab, 3, 2, t.s, 9);
  j = v[0].q;
  fn1(j, b);
  return 0;
}