#include <stdio.h>

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

unsigned j;
int v_ab;
signed v_q;

unsigned u;
int w_ab;
signed w_q;

signed fn6() {
  int a_ab;
  signed a_q;
  int p2;

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a_ab = 8L;
      a_q = 666;
      v_ab = w_ab;
      v_q = w_q;
      v_ab = a_ab;
      v_q = a_q;
    }
  }
}

int main() {
  int b = 0;

  fn6();

  j = v_q;
  fn1(j, b);

  return 0;
}