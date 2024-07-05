
short fn6(short p1, short p2) {
  short p2_low = p2 & 0xFF;
  short p2_high = p2 >> 8;
  return p1 - p2_low - p2_high;
}

short fn3(short p1, short p2) {
  short p2_low = p2 & 0xFF;
  short p2_high = p2 >> 8;
  return p1 - p2_low - p2_high;
}

void fn9(unsigned v, char *s_170, int ap) {
  printf("checksum = %X\n", v);
}

unsigned v;
short w;
short ab;
short ac_low = ac & 0xFF;
short ac_high = ac >> 8;
int fn13() {
  short an;
  for (w = 3; w; w -= 1)
    if (an = 250) {
      short p2_low = ac_low;
      short p2_high = ac_high;
      short p2 = fn6(ab, ac_low) || (an = w) == 0x294A85636008822D;
      short ao = 0xBCD1;
      if (fn3(ao, fn6(1, an)) - p2 & 1)
        v = 1;
    }
  return 3;
}

int main() {
  fn13();
  fn9(v, "g_170", 0);
  return 0;
}
