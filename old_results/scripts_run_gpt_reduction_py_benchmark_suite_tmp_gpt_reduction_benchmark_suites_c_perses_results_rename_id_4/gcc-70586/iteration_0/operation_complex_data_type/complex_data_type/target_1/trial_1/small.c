int fn2(int p1, unsigned p2) {
  return p1;
}

int fn3(int p1, int p2) {
  return p2 == 0 || p1 && p2 ? p1 : p1 % p2;
}

unsigned fn4(unsigned p1, int p2) {}

unsigned fn5(unsigned p1, unsigned p2) {
  return p1 + p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

int o;
int p;
short q;
static unsigned r;
unsigned s;
unsigned target[7][1];
int u[6];

static unsigned fn7(short);

unsigned fn7(short p1) {
  int ac;
  ac = fn3(p1, o);
  if (s) {
    int ad;
    short ae = 0x809C;
    unsigned af;
    for (; p1; --p1)
      ;
    for (af = 0; af <= 49; af = fn5(af, 8)) {
      int ag[8][6][5] = {1};
      unsigned ah;
      if (fn2(p1, ag[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98C), 9)))
        ;
      else {
        unsigned ai = ac;
        ah = ai;
        if (!r) {
          printf("l_1179=%llu\n", (unsigned long long)ad);
          break;
        }
      }
      p1 = fn6(0x60781BCD >= fn3(fn3(ae, p1) > 0xB5, p1) != p1 ^ 4294967287, ah);
      p = p1;
      ac = fn3(0x7D765DB6, u[4]);
    }
  } else {
    unsigned aj[3];
    target[2][0] = fn3(fn3(aj[1], q), 0x9CFB623F);
  }
  return p1;
}

int main() {
  if (fn7(1))
    ;
}