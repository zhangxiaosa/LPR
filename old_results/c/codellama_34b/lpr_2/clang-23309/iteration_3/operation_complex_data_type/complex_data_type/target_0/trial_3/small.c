
const int al = 3;
int t;
int v_int;
short w;

unsigned char ac = 1;
int fn13() {
  short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    t = ac_0 || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(ao - fn4(1 - an, 0xECL), t) & 1)
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
