
short fn10(short p1_1, short p1_2, short p2_1, short p2_2) {
  fn12(2L, 248UL, p2_1, 1, p1_1);
  return 0x2F2F6D26L;
}

short fn12(short p1_1, short p1_2, short p2_1, short p2_2, short p3_1, short p3_2, short p4_1, short p4_2, short p5_1, short p5_2) {
  for (w_1 = 3; w_1; w_1 -= 1) {
    short an_1 = 250UL;
    p2_1 = fn5(ab_1, ac_1) || (an_1 = w_1) == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an_1), 0xECL)), p2_1) & 1UL)
      v_1 = 1UL;
  }
  return 3L;
}

int main() {
  fn13();
  p1_1 = v_1;
  printf("checksum = %X\n", p1_1);
  return 0;
}
