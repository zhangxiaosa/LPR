short fn2(short p1, int p2) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned n;
int o;
static unsigned p = 0x01B28DB7L;
int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;

    if (0x4F92L < fn2(p | (ab = o == 0 ? 0 : o % o), 6))
      ;
    else {
      int ac = 0xE3L;

      if (o <= ac)
        ;
      else if (ab)
        break;
    }

    int ab1;

    if (0x4F92L < fn2(p | (ab1 = o == 0 ? 0 : o % o), 6))
      ;
    else {
      int ac1 = 0xE3L;

      if (o <= ac1)
        ;
      else if (ab1)
        break;
    }

    int ab2;

    if (0x4F92L < fn2(p | (ab2 = o == 0 ? 0 : o % o), 6))
      ;
    else {
      int ac2 = 0xE3L;

      if (o <= ac2)
        ;
      else if (ab2)
        break;
    }
  }

  return 0;
}