#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

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
  j = 3; // Inlined fn3(p1) body

  // Inlined fn5(e p1, a p2, d p3, f p4, f p5)
  {
    struct p a = {8L, 666};
    a = v[3] = w;
    v[3] = a;
  }

  printf("checksum = %X\n", j);
  return 0;
}