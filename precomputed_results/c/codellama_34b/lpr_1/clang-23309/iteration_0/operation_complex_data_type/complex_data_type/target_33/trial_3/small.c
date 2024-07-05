c
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

void fn1(s_short p1_high, s_short p1_low, int p2) { printf("checksum = %X\n", p1_high << 8 | p1_low); }

s_short fn2(s_short p1_high, s_short p1_low, s_short p2_high, s_short p2_low) { return p1_high - p2_low; }

s_short fn3(s_short p1_high, s_short p1_low, s_short p2_high, s_short p2_low) { return p1_high - p2_low; }

s_short fn5(s_short p1_high, s_short p1_low, s_short p2_high, s_short p2_low) { return p2_low; }

s_short fn6(s_short p1_high, s_short p1_low, s_short p2_high, s_short p2_low) { return p1_high - p2_low; }

s_short p_high, p_low;

void fn9(s_short p1_high, s_short p1_low, char *p2, int p3) { p_high = p1_high; p_low = p1_low; }

s_short t_high, t_low;
u_char u_high, u_low;
s_short v_high, v_low;
u_char w_high, w_low;
s_short ab_high, ab_low;
u_char ac_high, ac_low;
u_char fn10(s_short p1_high, s_short p1_low, s_short p2_high, s_short p2_low);
u_char fn11(u_char p1_high, u_char p1_low, s_short p2_high, s_short p2_low, s_short p3_high, s_short p3_low);
u_char fn12(s_short p1_high, s_short p1_low, s_short p2_high, s_short p2_low, u_char p3_high, u_char p3_low, s_short p4_high, s_short p4_low, s_short p5_high, s_short p5_low);

s_short fn13() {
  s_short ae_high, ae_low;
  fn10(u_high, t_high);
  return ae_high;
}

u_char fn10(s_short p1_high, s_short p1_low, s_short p2_high, s_short p2_low) {
  s_short af_high, af_low;
  u_char ag_high, ag_low;
  fn11(2L, ag_high, p2_high, p2_low, 1);
  return af_high;
}

u_char fn11(u_char p1_high, u_char p1_low, s_short p2_high, s_short p2_low, s_short p3_high, s_short p3_low) {
  s_short ai_high, ai_low;
  s_short aj_high, aj_low;
  fn12(ai_high, ai_low, ai_high, ai_low, p1_high, p1_low, 0, p1_high, p1_low, p1_high, p1_low);
  return aj_high;
}

u_char fn12(s_short p1_high, s_short p1_low, s_short p2_high, s_short p2_low, u_char p3_high, u_char p3_low, s_short p4_high, s_short p4_low, s_short p5_high, s_short p5_low) {
  s_short al_high, al_low;
  s_short am_high, am_low;
  s_short an_high, an_low;
  for (w_high = 3; w_high; w_high -= 1) {
    an_high = 250UL;
    p2_high = fn5(ab_high, ab_low) || (an_high = w_high) == 0x294A85636008822DLL;
    s_short ao_high, ao_low;
    if (fn2(fn3(ao_high, ao_low, fn6(am_high, am_low)), p2_high) & 1UL)
      v_high = 1UL;
  }
  return al_high;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v_high, v_low, "g_170", ap);
  fn1(p_high, p_low, ap);
  return 0;
}
