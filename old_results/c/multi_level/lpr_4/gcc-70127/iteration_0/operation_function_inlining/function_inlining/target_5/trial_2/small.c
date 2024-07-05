#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

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

int main() {
  int i;
  int b = 0;

  // Inlined body of fn6()
  {
    d p1 = t.ab;
    a p2 = 3;
    d p3 = 2;
    f p4 = t.s;
    f p5 = 9;

    struct p a = {8L, 666};

    for (p2 = 0; p2 >= 0; p2 -= 1) {
      for (; u <= 1; u += 1) {
        a = v[p2] = w;
        v[p2] = a;
      }
    }

    j = p1;
  }

  for (i = 0; i < 1; i++) {
    a p1 = v[i].q;
    j = p1;
  }

  printf("checksum = %X\n", j);

  return 0;
}