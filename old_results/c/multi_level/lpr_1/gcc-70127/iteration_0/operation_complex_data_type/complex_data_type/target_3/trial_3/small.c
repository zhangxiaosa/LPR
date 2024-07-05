#include <stdio.h>

unsigned ab;
int ab_2;
int q;
unsigned ab_r;
unsigned s_r;
int s_2;

typedef struct {
  int ab;
  int q;
} p;

typedef struct {
  unsigned ab;
  unsigned s;
} r;

p v[1];
p w = {0x1C87E74FL, 816};

unsigned fn5(unsigned p1, int p2, unsigned p3, unsigned p4, unsigned p5) {
  p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; ab <= 1; ab += 1) {
      a = v[ab] = w;
      v[ab] = a;
    }
}

int main() {
  fn5(ab, 2, 2, s_r, 9);
  ab_2 = v[0].q;
  printf("checksum = %X\n", ab_2);
  return 0;
}