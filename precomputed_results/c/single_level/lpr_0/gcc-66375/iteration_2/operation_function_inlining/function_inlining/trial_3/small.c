#include <stdio.h>

unsigned p;
unsigned t;
unsigned u;
unsigned v_00;

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

void fn5(int p1) {
  p = p1;
}

void fn6(int p1) {
  fn5(p1);
}

int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = (4L, d) + e[0];
  }
  return 3;
}

int main() {
  int f = 0;
  char a = 0xFBL;
  
  // Inlined fn8
  fn9(a, a, t, 18446744073709551613UL, t);
  
  // Inlined fn9
  fn10(6, 255UL, 1, a);
  
  // Inlined fn11
  {
    char a = 0xFBL;
  
    // Inlined fn8
    fn9(t, a, t, 18446744073709551613UL, t);
    
    fn6(v_00);
    fn1(p, f);
  }

  return 0;
}