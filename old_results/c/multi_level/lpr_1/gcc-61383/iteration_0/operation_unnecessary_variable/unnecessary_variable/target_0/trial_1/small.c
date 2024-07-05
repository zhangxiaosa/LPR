int l;
unsigned n1;
int o;
int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}
short fn6(unsigned n1) {
  for (; n1 < 12; n1 = fn3(n1, 3)) {
    if (0x4F92L < fn1(o, o))
      ;
    else {
      int ac = 0xE3L;
      if (o <= ac)
        ;
      else
        break;
    }
  }
  return l;
}
int main() { fn6(n1); }