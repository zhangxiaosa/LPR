fn2(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned fn3(p1) {
  int m = 0x809C;
  unsigned o_0 = 0xE576516E;
  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o_0);
  return p1;
}

int main() {
  if (fn3(1))
    ;
}