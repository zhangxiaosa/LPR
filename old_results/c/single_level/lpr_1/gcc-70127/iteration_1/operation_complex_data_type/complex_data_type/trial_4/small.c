#include <stdio.h>

typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned g;

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

unsigned j;

void fn2(int p1) {
  j = p1;
}

void fn4(unsigned p1, char* p2, int p3) {
  fn2(p1);
}

struct p {
  int ab;
  signed int q : 22;
};

struct r {
  unsigned ab;
  unsigned s;
};

struct r t;

unsigned u;

struct p v[1];

struct p w = {0x1C87E74F, 816};

d fn5(int p1, signed int p2, d p3, unsigned p4, unsigned p5) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
}

int main() {
  int i;
  fn5(t.ab, 3, 2, t.s, 9);
  for (i = 0; i < 1; i++)
    fn4(v[i].q, "g_217[i].f1", 0);
  fn1(j, 0);
  return 0;
}
