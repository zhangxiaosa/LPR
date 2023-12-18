int p1;
int p;
unsigned int r = 0x2A52L;
unsigned int s = 0x03F238A4L;

int fn3(int p1, int p2) {
  return p2 == 0 || (p1 && p2) ? p1 : p1 % p2;
}

static unsigned int fn7(short p1) {
  int ai;
  unsigned int af;
  int ag[8][6][5] = { { {1} } };
  unsigned int ah;

  ai = fn3(p1, p);

  if (s) {
    --p1;

    for (af = 0; af <= 49; af = af + 8) {
      if ((p1, ag[6][5][0] + p1) || (p1 && (ai = fn3(p1, 0xBC2AB98C), 9))) {
        // Do nothing
      } else {
        ah = ai;
        if (!r)
          break;
      }

      p1 = (0x60781BCD >= fn3(fn3(0x809C, p1) > 0xB5, p1) != (p1 ^ 4294967287UL)) - ah;
      p = p1;
      ai = fn3(0x7D765DB6L, p);
    }
  } else {
    p = fn3(fn3(p1, p), 0x9CFB623F);
  }

  return p1;
}

int main() {
  if (fn7(1)) {
    // Do nothing
  }

  return 0;
}