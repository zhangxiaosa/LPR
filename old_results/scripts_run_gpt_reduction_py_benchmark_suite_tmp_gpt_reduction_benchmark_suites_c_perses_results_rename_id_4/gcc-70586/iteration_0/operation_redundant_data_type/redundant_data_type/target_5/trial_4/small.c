int fn2(int p1, unsigned p2) { return p1; }
int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
unsigned fn4(unsigned p1, int p2) {}
unsigned fn5(unsigned p1, unsigned p2) { return p1 + p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
int o;
int p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
int u[6];
static unsigned fn7(short);
unsigned fn7(unsigned p1) {
  int ac;
  ac = fn3(p1, o);
  if (s) {
    int ad;
    short ae = 0x809CL;
    unsigned af;
    for (; p1; --p1)
      ;
    for (af = 0; af <= 49; af = fn5(af, 8)) {
      int ag[8][6][5] = {1L};
      unsigned ah;
      if (fn2(p1, ag[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        unsigned ai = ac;
        ah = ai;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = fn6(0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL,
               ah);
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);
    }
  } else {
    unsigned aj[3];
    t[2][0] = fn3(fn3(aj[1], q), 0x9CFB623FL);
  }
  return p1;
}

int main() {
  if (fn7(1))
    ;
}
