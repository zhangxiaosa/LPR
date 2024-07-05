#include <stdio.h>

typedef int c;
typedef unsigned d;

static short g_new = 0x7EBA;
d h = 0xCA;
short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;
static d l;
unsigned m_0_0_0, m_0_0_1, m_0_0_2, m_0_1_0, m_0_1_1, m_0_1_2;
unsigned m_1_0_0, m_1_0_1, m_1_0_2, m_1_1_0, m_1_1_1, m_1_1_2;
unsigned m_2_0_0, m_2_0_1, m_2_0_2, m_2_1_0, m_2_1_1, m_2_1_2;
unsigned m_3_0_0, m_3_0_1, m_3_0_2, m_3_1_0, m_3_1_1, m_3_1_2;
unsigned m_4_0_0, m_4_0_1, m_4_0_2, m_4_1_0, m_4_1_1, m_4_1_2;
unsigned m_5_0_0, m_5_0_1, m_5_0_2, m_5_1_0, m_5_1_1, m_5_1_2;
unsigned m_6_0_0, m_6_0_1, m_6_0_2, m_6_1_0, m_6_1_1, m_6_1_2;
unsigned m_7_0_0, m_7_0_1, m_7_0_2, m_7_1_0, m_7_1_1, m_7_1_2;
unsigned m_8_0_0, m_8_0_1, m_8_0_2, m_8_1_0, m_8_1_1, m_8_1_2;

c n;

unsigned fn1(signed p1, short p2, int p3, signed p4);
signed fn2(int);

unsigned fn3() {
  fn1(fn2(0), 7, 7, 0);
  return n;
}

unsigned fn1(signed p1, short p2, int p3, signed p4) {
  p1 || (m_1_0_1 = p1);
  return 2;
}

signed fn2(int p1) {
  unsigned v[6][3][2];
  c w = 0x709BFC8AL;
  for (; i < 6;) {
    if (k)
      break;
    return v[g_new][0][0];
  }
  if (h)
    ;
  else
    return j[g_new][g_new];
  for (; p1;)
    ;
  return w;
}

int main() { fn3(); }
