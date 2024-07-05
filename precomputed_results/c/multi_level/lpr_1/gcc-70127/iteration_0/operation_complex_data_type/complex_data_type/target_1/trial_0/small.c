#include <stdio.h>

unsigned j;
unsigned t_ab;
unsigned t_s;
unsigned u;

struct struct_p {
  int ab;
  signed q : 22;
};
typedef struct struct_p p;

struct struct_r {
  unsigned ab;
  unsigned s;
};
typedef struct struct_r r;

p v[1];
p w = {0x1C87E74FL, 816};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  p a = {8L, 666};

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
}

int main() {
  fn5(t_ab, 2, 2, t_s, 9);
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}