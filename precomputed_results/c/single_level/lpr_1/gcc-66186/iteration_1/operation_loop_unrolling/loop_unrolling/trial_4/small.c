#include <iostream>

typedef short b;
typedef int c;
typedef unsigned short e;
typedef unsigned f;
c g;
c h;

b fn3(signed, signed, signed, e, c);
f fn4(c, e, e, f, e);

c fn5() {
  f o = 0x5A683F60L;
  c p1 = 0x57638FF4L;
  e p3 = g;
  c s = p1;
  if (fn3(0x9A5DL, g, s, 0x30A04A8FL, p3))
    ;
  return o;
}

b fn3(signed p1, signed p2, signed p3, e p4, c p5) {
  c ad = -7L;
  signed ae = 0xA3L;
  if (fn4(ad, 4294967287UL, ad, g, p5))
    ;
  return ae;
}

f fn4(c p1, e p2, e p3, f p4, e p5) {
  b ak[8];
  if (h < 0) {
    if (ak[p3]) goto loop_exit_7; // unrolled iteration for p4 = 7
    if (ak[p3]) goto loop_exit_6; // unrolled iteration for p4 = 6
    if (ak[p3]) goto loop_exit_5; // unrolled iteration for p4 = 5
    if (ak[p3]) goto loop_exit_4; // unrolled iteration for p4 = 4
    if (ak[p3]) goto loop_exit_3; // unrolled iteration for p4 = 3
    if (ak[p3]) goto loop_exit_2; // unrolled iteration for p4 = 2
    if (ak[p3]) goto loop_exit_1; // unrolled iteration for p4 = 1
    if (ak[p3]) goto loop_exit_0; // unrolled iteration for p4 = 0
  }

loop_exit_7: // unrolled iteration for p4 = 7
loop_exit_6: // unrolled iteration for p4 = 6
loop_exit_5: // unrolled iteration for p4 = 5
loop_exit_4: // unrolled iteration for p4 = 4
loop_exit_3: // unrolled iteration for p4 = 3
loop_exit_2: // unrolled iteration for p4 = 2
loop_exit_1: // unrolled iteration for p4 = 1
loop_exit_0: // unrolled iteration for p4 = 0
  return g;
}

int main() {
  fn5();
}
