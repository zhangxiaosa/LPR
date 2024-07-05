#include <stdio.h>

typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned g;

unsigned j;
struct p {
  c ab;
  signed q : 22;
};
struct r {
  unsigned ab;
  unsigned s;
};
struct r t;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

void fn2(int p1) {
  j = p1;
}

void fn5(e p1, signed p2, d p3, unsigned p4) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
}

int main() {
  int i;
  struct p a = {8L, 666};
  for (int p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
  printf("checksum = %X\n", j);
  return 0;
}
