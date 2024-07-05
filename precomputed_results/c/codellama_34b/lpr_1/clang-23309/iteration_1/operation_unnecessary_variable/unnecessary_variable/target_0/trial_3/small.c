
short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }
unsigned ac = 1;
unsigned char fn10(short p1, short p2) {
  short al = 3;
  short an = 250;
  if (fn2(fn3(0xBCD1, 1 - an), ac) & 1)
    v = 1;
  return al;
}
int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
