#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

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

int main() {
  j = 3; // Inlined fn3(p1) body

  struct p a = {8L, 666};
  for (a = v[0] = w; u <= 1; u += 1) {
    v[0] = a;
  }

  j = v[0].q;
  printf("checksum = %X\n", v[0].q);
}
