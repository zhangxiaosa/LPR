#include <stdio.h>

static short g_new = 0x7EBA;
int h = 0xCA;
short i;
int j[5][5];
int k = 0xAF7C65D6L;
int m[9][2][3];
int n;

int fn2(int);

int fn3() {
  if (fn2(0))
    m[1][0][1] = 0;
  return n;
}

int fn2(int p1) {
  int v_0_0_0;
  int v_0_0_1;
  int v_0_1_0;
  int v_0_1_1;
  int v_0_2_0;
  int v_0_2_1;
  int v_1_0_0;
  int v_1_0_1;
  int v_1_1_0;
  int v_1_1_1;
  int v_1_2_0;
  int v_1_2_1;
  int v_2_0_0;
  int v_2_0_1;
  int v_2_1_0;
  int v_2_1_1;
  int v_2_2_0;
  int v_2_2_1;
  int v_3_0_0;
  int v_3_0_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_3_2_0;
  int v_3_2_1;
  int v_4_0_0;
  int v_4_0_1;
  int v_4_1_0;
  int v_4_1_1;
  int v_4_2_0;
  int v_4_2_1;
  int v_5_0_0;
  int v_5_0_1;
  int v_5_1_0;
  int v_5_1_1;
  int v_5_2_0;
  int v_5_2_1;
  
  for (; i < 6;) {
    if (k)
      break;
    return v_0_0_0;
  }
  if (h)
    ;
  else
    return j[g_new][g_new];
  for (; p1;)
    ;
  return 0x709BFC8A;
}

int main() {
  fn3();
}
