
<SYS>

#include <stdio.h>

// Original program
short fn2(short p1, short p2) {
  return p1 - p2;
}

short fn3(short p1, short p2) {
  return p1 - p2;
}

unsigned v;
unsigned char w;
unsigned ac = 1;
unsigned char fn10(short, short);

short fn13() {
  fn10(0, 0);
  return 1;
}

unsigned char fn10(short p1, short p2) {
  short an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = ac || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, 1 - an), p2) & 1)
      v = 1;
  }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}

// Optimized program
short fn2_optimized(short p1, short p2) {
  return p1 - p2;
}

short fn3_optimized(short p1, short p2) {
  return p1 - p2;
}

unsigned v_optimized;
unsigned char w_optimized;
unsigned ac_optimized = 1;
unsigned char fn10_optimized(short, short);

short fn13_optimized() {
  fn10_optimized(0, 0);
  return 1;
}

unsigned char fn10_optimized(short p1, short p2) {
  short an;
  for (w_optimized = 3; w_optimized; w_optimized--) {
    an = 250;
    p2 = ac_optimized || (an = w_optimized) == 0x294A85636008822D;
    if (fn2_optimized(fn3_optimized(0xBCD1, 1 - an), p2) & 1)
      v_optimized = 1;
  }
  return 3;
}

int main_optimized() {
  fn13_optimized();
  printf("checksum = %X\n", v_optimized);
  return 0;
}

</SYS>
