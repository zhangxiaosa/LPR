int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

int fn2(short p1) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned n;
int o;
int main() {
  for (; n < 12; ) {
    int ab1;
    int ab2;
    int ab3;
    int ab4;

    if (0x4F92L < fn2(0x01B28DB7L | (ab1 = fn1(o, o))))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab1)
      break;

    n = fn3(n, 3);

    if (0x4F92L < fn2(0x01B28DB7L | (ab2 = fn1(o, o))))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab2)
      break;

    n = fn3(n, 3);

    if (0x4F92L < fn2(0x01B28DB7L | (ab3 = fn1(o, o))))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab3)
      break;

    n = fn3(n, 3);

    if (0x4F92L < fn2(0x01B28DB7L | (ab4 = fn1(o, o))))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab4)
      break;

    n = fn3(n, 3);
  }

  return 0;
}