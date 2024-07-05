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
  j = 3; // Inlined fn3(p1) body
  t.ab;
  t.s;
  u;
  v[0].q;
  j = w.q;
  printf("checksum = %X\n", j);
}
