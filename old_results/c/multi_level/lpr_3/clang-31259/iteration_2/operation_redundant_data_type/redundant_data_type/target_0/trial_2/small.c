unsigned fn4(unsigned p1, unsigned p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }
unsigned s;
unsigned u;
unsigned v;
static unsigned w = 254U;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
unsigned af;
unsigned fn9() {
  unsigned ai[2];
  unsigned i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1U;;) {
    for (; i < 2; i++)
      ;
    for (af = 6U; af >= 0; af -= 1U)
      v = (unsigned)ai[0] ^= ad[w + 1][w][af] = fn4(fn5(1U, fn5(255U, u--)), 4294967295U);
    return ae;
  }
}
unsigned main() {
  fn9();
  s = (unsigned)ad[2][1][0];
  printf("checksum = %u\n", s);
  return 0;
}