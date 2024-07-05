
unsigned short v_low, v_high;
unsigned short w_low, w_high;
unsigned short ab_low, ab_high;
unsigned short ac_low, ac_high;
unsigned short an_low, an_high;
unsigned short ao_low, ao_high;

void fn3(unsigned short p1, unsigned short p2) { return p1 - p2; }
void fn6(unsigned short p1, unsigned short p2) { return p1 - p2; }
void fn9(unsigned short v_low, unsigned short v_high, char *s_170, int ap) {
  printf("checksum = %X\n", v_high);
}

int fn13() {
  short an_low, an_high;
  for (w_low = 3; w_low; w_low -= 1)
    if (an_low = 250) {
      short p2 = fn6(ab_low, ac_low) || (an_low = w_low) == 0x294A85636008822D;
      short ao_low = 0xBCD1;
      if (fn3(ao_low, fn6(1, an_low)) - p2 & 1)
        v_low = 1;
    }
  return 3;
}

int main() {
  fn13();
  fn9(v_low, v_high, "g_170", 0);
  return 0;
}
