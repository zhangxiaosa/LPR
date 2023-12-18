int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned m;
unsigned n;
int o;
short fn5(p1) {
  int ab;

  // Unrolled loop (iteration 1):
  if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6))
    ;
  else if (p1 <= 0xE3L)
    ;
  else if (ab)
    break;

  // Unrolled loop (iteration 2):
  if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6))
    ;
  else if (p1 <= 0xE3L)
    ;
  else if (ab)
    break;

  // Unrolled loop (iteration 3):
  if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6))
    ;
  else if (p1 <= 0xE3L)
    ;
  else if (ab)
    break;

  // Unrolled loop (iteration 4):
  if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6))
    ;
  else if (p1 <= 0xE3L)
    ;
  else if (ab)
    break;

  return m;
}

int main() {
  if (fn5(o))
    ;
}