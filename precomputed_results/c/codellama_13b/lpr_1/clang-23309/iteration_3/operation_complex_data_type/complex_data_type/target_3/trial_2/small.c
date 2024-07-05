
short ao_low;
short ao_high;

void fn9(unsigned v, char *s_170, int ap) {
  printf("checksum = %X\n", v);
}

unsigned v;
short w;
short ab;
short ac = 3;
int fn13() {
  short an;
  for (w = 3; w; w -= 1) {
    if (an == 250) {
      short p2_low;
      short p2_high;
      short ao_low_tmp;
      short ao_high_tmp;

      p2_low = fn6(ab, ac) || (an = w) == 0x294A85636008822D;
      p2_high = fn6(1, an);
      ao_low_tmp = fn3(p2_low, 1);
      ao_high_tmp = fn3(p2_high, 1) | 1;
      ao_low = ao_low_tmp & 0xFF;
      ao_high = ao_high_tmp & 0xFF;

      if (ao_low | ao_high)
        v = 1;
    }
  }
  return 3;
}

int main() {
  fn13();
  fn9(v, "g_170", 0);
  return 0;
}
