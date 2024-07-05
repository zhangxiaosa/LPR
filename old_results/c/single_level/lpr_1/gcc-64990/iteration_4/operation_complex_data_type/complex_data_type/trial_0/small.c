#include <stdio.h>

short g = 0x7EBA;
int h = 0xCA;
short i;
int j[5][5];
int k = 0xAF7C65D6L;
static unsigned l;
unsigned m1;
int n;

unsigned fn1(signed, short, signed);
signed fn2();

unsigned fn3() {
  fn1(fn2(0), 7, 0);
  return n;
}

unsigned fn1(signed p1, short p2, signed p4) {
  p1 || (m1 = p1);
  return 2;
}

signed fn2() {
  unsigned v_0_0_0;
  unsigned v_0_0_1;
  unsigned v_0_1_0;
  unsigned v_0_1_1;
  unsigned v_0_2_0;
  unsigned v_0_2_1;
  unsigned v_1_0_0;
  unsigned v_1_0_1;
  unsigned v_1_1_0;
  unsigned v_1_1_1;
  unsigned v_1_2_0;
  unsigned v_1_2_1;
  unsigned v_2_0_0;
  unsigned v_2_0_1;
  unsigned v_2_1_0;
  unsigned v_2_1_1;
  unsigned v_2_2_0;
  unsigned v_2_2_1;
  unsigned v_3_0_0;
  unsigned v_3_0_1;
  unsigned v_3_1_0;
  unsigned v_3_1_1;
  unsigned v_3_2_0;
  unsigned v_3_2_1;
  unsigned v_4_0_0;
  unsigned v_4_0_1;
  unsigned v_4_1_0;
  unsigned v_4_1_1;
  unsigned v_4_2_0;
  unsigned v_4_2_1;
  
  int w = 0x709BFC8A;
  
  for (i = 0;;) {
    if (k)
      break;
    return v_0_0_0;
  }
  
  if (h)
    ;
  else
    return j[g][g];
  
  for (; p1;) {
  }
  
  return w;
}

int main() {
  fn1(fn2(0), 7, 0);
  return n;
}