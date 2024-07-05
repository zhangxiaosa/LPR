int fn2(int p1, int p2) { return p1 - p2; }

unsigned i;

unsigned fn3(p1) {
  short m = 0x809C;
  unsigned o1 = 0xE576516E;

  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o1);

  return p1;
}

int main() { fn3(1); }
