short p;
short q;
unsigned short r = 0x2A52;
unsigned int s = 0x03F238A4;
unsigned int t[7][1];
int u[6];

short fn2(short p1, unsigned p2) {
  return p1;
}

int fn3(int p1, int p2) {
  return p2 == 0 || p1 && p2 ? p1 : p1 % p2;
}

unsigned fn4(unsigned p1, int p2) {
  // [TODO: Missing function body]
}

static int fn7(short p1) {
  int ac;
  ac = fn3(p1, 0);
  if (s) {
    int ad;
    unsigned af;
    for (; p1; --p1)
      ;
    for (af = 0; af <= 49; af = af + 8) {
      int ag[8][6][5] = {1};
      unsigned ah;
      if (fn2(p1, ag[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98C), 9)))
        ;
      else {
        ah = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = (0x60781BCD >= fn3(fn3(p1, p1) > 0xB5, p1) != p1 ^ 4294967287U) - ah;
      p = p1;
      ac = fn3(0x7D765DB6, u[4]);
    }
  } else
    t[2][0] = fn3(fn3(0, q), 0x9CFB623F);
  return p1;
}

static int fn8() {
  if (fn7(1))
    ;
}

int main() {
  fn8();
}
