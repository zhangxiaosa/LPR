
unsigned fn10(unsigned p1, short p2) {
  short ao = 0xBCD1;
  v = fn2(ao - (fn6(1, p2) & 1) << 8, p2) & 1;
  return v;
}
