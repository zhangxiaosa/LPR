void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

signed fn2(signed p1, signed p2) { return p1; }

short fn3(short p1, short p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;

void fn6(unsigned p1) { s = s ^ p1; }

void fn7(unsigned p1) { fn6(p1); }

unsigned u;

int v;

static unsigned w = 254U;

signed ad00 = 8;
signed ad01 = 0;
signed ad02 = 0;
signed ad03 = 0;
signed ad04 = 0;
signed ad05 = 0;
signed ad06 = 0;
signed ad10 = 8;
signed ad11 = 0;
signed ad12 = 0;
signed ad13 = 0;
signed ad14 = 0;
signed ad15 = 0;
signed ad16 = 0;
signed ad20 = 8;
signed ad21 = 0;
signed ad22 = 0;
signed ad23 = 0;
signed ad24 = 0;
signed ad25 = 0;
signed ad26 = 0;
signed ad30 = 0x98;

short ae;

int af;

signed fn9() {

  unsigned ah = 3U;

  int ai[2];

  int i;

  for (i = 0; i < 2; i++)

    ai[i] = 8;

  for (w = 1;;) {

    for (; i < 5; i++)

      ;

    for (af = 6; af >= 0; af -= 1)

      v = ai[0] ^= ad[w + 1][w][af] =

      fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

    return ae;

  }

}

int main() {

  int i;

  int j;

  int k;

  int aj = 0;

  fn9();

  for (i = 0; i < 7; i++)

    for (j = 0; j < 5; j++)

      for (k = 0; k < 7; k++) {

        fn7(ad[i][j][k]);

      }

  fn1(s, aj);

  return 0;

}