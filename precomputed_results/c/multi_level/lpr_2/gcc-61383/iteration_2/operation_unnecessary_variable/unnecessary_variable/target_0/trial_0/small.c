int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
int fn2(p1) { return (short)p1; }
int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
unsigned n;
int o;
int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92 < fn2(0x01B28DB7 | (ab = fn1(o, o))))
      ;
    else if (o <= 0xE3)
      ;
    else if (ab)
      break;
  }
  return 0;
}