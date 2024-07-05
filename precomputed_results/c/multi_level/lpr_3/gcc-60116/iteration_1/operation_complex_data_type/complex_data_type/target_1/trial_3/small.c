#include <stdio.h>

unsigned q;
signed v;
unsigned w = 0xDC6F3D13L;
long long ag_0;
long long ag_1;
long long ag_2;
long long ag_3;
signed ah;
signed ai;
long aj;
long ak;
unsigned al;
signed am = 0x41AEA787L;
signed an;
signed ao;
unsigned ap;
unsigned aq;

long fn2(signed p1, signed p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
signed fn4(signed p1, signed p2) { return p1; }
signed fn5(signed p1, signed p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

long fn12() {
  signed au_0_0_0, au_0_0_1, au_0_0_2, au_0_0_3, au_0_0_4, au_0_0_5, au_0_0_6, au_0_0_7, au_0_0_8, au_0_0_9, au_0_1_0, au_0_1_1, au_0_1_2, au_0_1_3, au_0_1_4, au_0_1_5, au_0_1_6, au_0_1_7, au_0_1_8, au_0_1_9, au_1_0_0, au_1_0_1, au_1_0_2, au_1_0_3, au_1_0_4, au_1_0_5, au_1_0_6, au_1_0_7, au_1_0_8, au_1_0_9, au_1_1_0, au_1_1_1, au_1_1_2, au_1_1_3, au_1_1_4, au_1_1_5, au_1_1_6, au_1_1_7, au_1_1_8, au_1_1_9, au_2_0_0, au_2_0_1, au_2_0_2, au_2_0_3, au_2_0_4, au_2_0_5, au_2_0_6, au_2_0_7, au_2_0_8, au_2_0_9, au_2_1_0, au_2_1_1, au_2_1_2, au_2_1_3, au_2_1_4, au_2_1_5, au_2_1_6, au_2_1_7, au_2_1_8, au_2_1_9, au_3_0_0, au_3_0_1, au_3_0_2, au_3_0_3, au_3_0_4, au_3_0_5, au_3_0_6, au_3_0_7, au_3_0_8, au_3_0_9, au_3_1_0, au_3_1_1, au_3_1_2, au_3_1_3, au_3_1_4, au_3_1_5, au_3_1_6, au_3_1_7, au_3_1_8, au_3_1_9, au_4_0_0, au_4_0_1, au_4_0_2, au_4_0_3, au_4_0_4, au_4_0_5, au_4_0_6, au_4_0_7, au_4_0_8, au_4_0_9, au_4_1_0, au_4_1_1, au_4_1_2, au_4_1_3, au_4_1_4, au_4_1_5, au_4_1_6, au_4_1_7, au_4_1_8, au_4_1_9;
  //...
  if (w >= (fn7(4UL, fn6(aq, fn5(ai, au_4_1_5 = fn8(~fn4(fn3(aj, fn2(ap, 1L)) != 0, an), ak) && 0x57L))) > 2)) {
    v = am;
    ag_3 = au_4_1_5;
  }
  else
    ao = au_4_1_5;

  return al;
}

signed main() {
  fn12();
  q = v;
  printf("checksum = %d\n", q);
  return 0;
}