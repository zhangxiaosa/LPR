
unsigned char fn4_inline(unsigned p1, unsigned p2) {
  return p1;
}

int p;
int t;
int v_int;
short w;
unsigned ac = 1;
int fn13() {
  short al = 3;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    t = ac || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(ao - fn4_inline(1 - an, 0xECL), t) & 1)
      v_int = 1;
  }
  return al;
}

int main() {
  fn13();
  p = v_int;
  printf("checksum = %d\n", p);
  return 0;
}
