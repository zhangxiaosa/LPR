unsigned int fn1(unsigned int p1, unsigned int p2) { return p2 == 0 ? p1 : p1 % p2; }
unsigned int fn2(unsigned int p1) { return (unsigned short)p1; }
unsigned int fn3(unsigned int p1, unsigned int p2) {
  return p1 & p2 & (p1 > 4294967295U - p2) || (p1 < 0 && p2 < 0 && p1) ? p1 : p1 + p2;
}
unsigned int n;
int o;

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92 < ((unsigned short)0x01B28DB7 | (ab = fn1(o, o))))
      ;
    else if (o <= 0xE3)
      ;
    else if (ab)
      break;
  }
  return 0;
}