
int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int v_int;
short w;
unsigned ac = 1;
int fn13() {
  short an;
  for (w = 3; w; w -= 1) {
    an = 0x294A;
    short ao = 0xBCD1;
    if (fn2(ao - fn4(1 - an, 0xECL), 0) & 1)
      v_int = 1;
  }
  return 0;
}
int main() {
  fn13();
  printf("checksum = %d\n", v_int);
  return 0;
}
