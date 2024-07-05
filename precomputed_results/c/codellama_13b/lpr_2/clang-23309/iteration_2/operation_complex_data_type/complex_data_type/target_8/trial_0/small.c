
short p1;
short p2;
unsigned char p3;
short p4;
short p5;
short p6;
short p7;
short p8;
short p9;
short p10;
short p11;
short p12;
short p13;
short p14;
short p15;
short p16;
short p17;
short p18;
short p19;
short p20;
short p21;
short p22;
short p23;
short p24;
short p25;

short fn2(short p1, short p2) {
  return p1 - p2;
}

short fn3(short p1, short p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned p1, unsigned p2) {
  return p1;
}

short fn5(short p1, short p2) {
  return p2;
}

short fn6(short p1, short p2) {
  return p1 - p2;
}

short fn10(short p1, short p2) {
  fn12(2L, 248UL, p2, 1, p1);
  return 0x2F2F6D26L;
}

short fn12(short p1, short p2, short p3, short p4, short p5) {
  for (p6 = 3; p6; p6 -= 1) {
    short p7 = 250UL;
    p2 = fn5(p4, p5) || (p7 = p6) == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, p7), 0xECL)), p2) & 1UL)
      p1 = 1UL;
  }
  return 3L;
}

int main() {
  fn13();
  p19 = p1;
  printf("checksum = %X\n", p19);
  return 0;
}
