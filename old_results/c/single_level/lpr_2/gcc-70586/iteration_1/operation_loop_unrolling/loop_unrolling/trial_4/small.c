short fn2(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned i;

unsigned fn3(unsigned p1) {
  int l;
  short m = 0x809C;
  unsigned n;
  unsigned o;

  // Unrolled loop iteration 0
  o = 0xE576516E;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);

  // Unrolled loop iteration 1
  n = 8;
  o = 0xE576516E;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);

  // Unrolled loop iteration 2
  n = 16;
  o = 0xE576516E;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);

  // Unrolled loop iteration 3
  n = 24;
  o = 0xE576516E;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);

  // Unrolled loop iteration 4
  n = 32;
  o = 0xE576516E;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);

  // Unrolled loop iteration 5
  n = 40;
  o = 0xE576516E;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);

  // Unrolled loop iteration 6
  n = 48;
  o = 0xE576516E;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);

  return p1;
}

int main() {
  if (fn3(1))
    ;
}