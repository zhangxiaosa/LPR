unsigned n1;
int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                  : p1 + p2;
}
short fn6(unsigned n1) {
  for (; n1 < 12; n1 = fn3(n1, 3)) {
    int ab;
    if (0x4F92L < (ab = fn1(0, 0), 6))
      ;
    else if (0 <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  return 0;
}
int main() { fn6(n1); }
