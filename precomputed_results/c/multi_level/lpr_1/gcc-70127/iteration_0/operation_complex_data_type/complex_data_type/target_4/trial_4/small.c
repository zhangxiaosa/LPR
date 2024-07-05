#include <stdio.h>

unsigned j;
unsigned ab;
unsigned s;
unsigned u;

int v_ab[1];
signed int v_q[1];

unsigned w_ab = 0x1C87E74F;
signed int w_q = 816;

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  int a_ab = 8L;
  signed int a_q = 666;
  
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      v_ab[p2] = w_ab;
      v_q[p2] = w_q;
    }
    ab = a_ab;
    v_ab[p2] = ab;
    v_q[p2] = a_q;
  }
}

int main() {
  fn5(ab, 2, 2, s, 9);
  j = v_q[0];
  printf("checksum = %X\n", j);
  return 0;
}