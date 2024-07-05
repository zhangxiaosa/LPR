void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

signed fn2(signed p1, signed p2) { return p1; }

short fn3(short p1, short p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;

void fn6(p1) { s = s ^ p1; }

void fn7(p1) { fn6(p1); }

unsigned u;

int v;

static unsigned w = 254U;

signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

short ae;

int af;

int main() {
  unsigned ah = 3U;
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i++)
      ;
    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    }
    return ae;
  }

  int i, j, k;
  unsigned u;
  unsigned s;

  unsigned w = 254U;

  unsigned ah = 3U;
  int ai[2];

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (; i < 5; i++)
    ;

  for (af = 6; af >= 0; af -= 1) {
    int p1 = ad[w + 1][w][af];
    unsigned p2 = 4294967295U;
    unsigned p3 = u--;
    signed p4 = ah;
    unsigned p5 = 255U;
    short p6 = 1;

    int fn5_res = p5;
    signed fn2_res = p4;
    short fn3_res = p6;
    int fn4_res = fn4(fn3_res, fn5_res);

    int exp = ((s ^ p1) = fn4_res);
    int ai0 = ai[0];
    v = ai0 = exp;

    s = fn6(p1);
  }

  return ae;
}