
unsigned fn10() {
  unsigned an_high = 250;
  return fn2((short)0xBCD1 - (fn6(1, an_high) & 1) << 8, 0) & 1;
}
