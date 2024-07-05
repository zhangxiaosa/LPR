#include <stdio.h>

unsigned int t_ab;
unsigned int t_s;

unsigned int u;

unsigned int v_ab;
signed int v_q;
unsigned int w_ab;
signed int w_q = {0x1C87E74Fu, 816u};

unsigned int fn5(unsigned int p1, signed int p2, unsigned int p3,
                 unsigned int p4, unsigned int p5) {
  for (; p2 >= 0; p2 -= 1) {
    signed int a_ab = 8L;
    signed int a_q = 666;
    v_ab = w_ab;
    v_q = w_q;
  }
  return v_q;
}

int main() {
  unsigned int checksum = fn5(t_ab, 3, 2, t_s, 9u);
  printf("checksum = %X\n", checksum);
  return 0;
}