unsigned p;
long v;
short w;
short ac = 1;

int fn13() {
  unsigned am = 1;
  unsigned an;
  for (w = 3; w > 0; w -= 1) {
    if ((an = w) == 0x294A85636008822D) {
      short ao = 0xBCD1L;
      if ((ao - (fn6(am, an) - 0xECL)) - ac & 1UL)
        v = 1UL;
    }
  }
  return 0;
}

int main() {
  fn13();
  p = (unsigned)v;
  return 0;
}