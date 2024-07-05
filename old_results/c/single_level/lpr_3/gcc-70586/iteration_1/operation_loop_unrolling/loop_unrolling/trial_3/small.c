typedef unsigned d;

\nd fn1(d p1, d p2) { return p1 + p2; }

d fn2(d p1, d p2) { return p1 - p2; }

unsigned i;

d fn3(p1) {
  d m = 0x809C;
  d n;

  // Loop unrolling
  for (n = 0; n <= 49; n += 8) {
    d o = 0xE576516E;
    if (i)
      printf("l_1179=%lld\n", (long long)0);

    // Unrolled iterations
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);
  }

  return p1;
}

int main() {
  if (fn3(1))
    ;
} 
