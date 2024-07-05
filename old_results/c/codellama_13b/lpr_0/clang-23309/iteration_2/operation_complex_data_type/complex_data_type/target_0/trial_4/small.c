
unsigned fn2_optimized(unsigned p1, short p2) { return p1 - p2; }
unsigned fn5(short p1, short p2) { return p2; }
unsigned fn6_optimized(unsigned p1, short p2) { return p2; }

unsigned v_low;
unsigned v_high;
unsigned p_low;
unsigned p_high;
unsigned ab_low;
unsigned ab_high;
unsigned an_low;
unsigned an_high;

void fn9(unsigned p1, char *p2) {
  p_low = p1 & 0xFF;
  p_high = (p1 >> 8) & 0xFF;
}

unsigned fn10(unsigned p1, short p2) {
  ab_low = fn5(ab_low, ac_low);
  ab_high = fn5(ab_high, ac_high);
  an_low = w_low;
  an_high = w_high;
  v_low = fn2_optimized(an_low, (fn6_optimized(1, an_high) & 1) << 8) & 1;
  v_high = fn2_optimized(an_high, (fn6_optimized(1, an_low) & 1) << 8) & 1;
  return v;
}

unsigned fn13() {
  fn10(v_low, v_high);
  return 1;
}

int main() {
  fn13();
  fn9(v_low, "g_170");
  printf("checksum = %X\n", p_low);
  return 0;
}
