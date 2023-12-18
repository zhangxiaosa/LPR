int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned m;
unsigned n;
int o;
short fn5(p1) {
  // Unrolled loop
  int ab;

  if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6)) {
    // Loop unrolled iteration 1
    if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6))
      ;
    else if (p1 <= 0xE3L)
      ;
    else if (ab)
      break;

    // Loop unrolled iteration 2
    if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6))
      ;
    else if (p1 <= 0xE3L)
      ;
    else if (ab)
      break;

    // Loop unrolled iteration 3
    if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6))
      ;
    else if (p1 <= 0xE3L)
      ;
    else if (ab)
      break;

    // ... Unrolled iterations 4 to 12 ...
  }

  return m;
}

int main() {
  if (fn5(o))
    ;
}