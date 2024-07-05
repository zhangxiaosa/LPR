#include <stdio.h>

typedef signed int;
typedef int;
typedef unsigned int;
typedef unsigned int;
typedef unsigned int;
typedef struct {
  int ab;
  signed int q : 22;
} p;
typedef struct {
  unsigned int ab;
  unsigned int s;
} r;
unsigned int j;
r t;
unsigned int u;
p v[1];
p w = {0x1C87E74FL, 816};
unsigned int fn5(unsigned int p1, signed int p2, unsigned int p3, unsigned int p4, unsigned int p5) {
  p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
}

int main() {
  fn5(t.ab, 3, 2, t.s, 9);
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}
