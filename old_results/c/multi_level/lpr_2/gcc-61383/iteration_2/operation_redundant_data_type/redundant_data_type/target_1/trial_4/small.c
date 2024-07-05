short fn1(short p1, short p2) { return p2 == 0 ? p1 : p1 % p2; }
short fn2(short p1) { return p1; }
short fn3(short p1, short p2) { return p1 && p2 && p1 > 32767 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2; }

unsigned n;
short o;

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    short ab;
    if (0x4F92L < fn2(0x01B28DB7L | (ab = fn1(o, o))))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  return 0;
}