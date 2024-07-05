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

a fn6() {
  struct p a = {8L, 666};
  for (int p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      v[p2] = w;
    }
  }
}

int main() {
  int i;
  j = 3; // Inlined fn3(p1) body
  fn6();
  for (i = 0; i < 1; i++) {
    j = v[i].q;
  }
  printf("checksum = %X\n", j);
  return 0;
}
