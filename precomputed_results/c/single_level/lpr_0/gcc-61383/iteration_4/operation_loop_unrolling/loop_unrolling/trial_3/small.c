short fn2(short p1, int p2) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned n;
int o;
static unsigned p = 0x01B28DB7L;

int main() {
  int ab;
  int ac = 0xE3L;

  // First iteration
  if (0x4F92L < fn2(p | (ab = o == 0 ? 0 : o % o), 6))
    ;
  else if (o > ac && !ab)
    break;

  // Second iteration
  if (0x4F92L < fn2(p | (ab = o == 0 ? 0 : o % o), 6))
    ;
  else if (o > ac && !ab)
    break;

  // Third iteration
  if (0x4F92L < fn2(p | (ab = o == 0 ? 0 : o % o), 6))
    ;
  else if (o > ac && !ab)
    break;

  // Fourth iteration
  if (0x4F92L < fn2(p | (ab = o == 0 ? 0 : o % o), 6))
    ;
  else if (o > ac && !ab)
    break;

  return 0;
}