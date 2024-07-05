int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
int fn2(short p1) { return p1; }
int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
unsigned n;
int o;
static unsigned p = 0x01B28DB7L;
int main() {
  int ab1;
  if (0x4F92L < fn2(p | (ab1 = fn1(o, o))))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab1)
    break;

  int ab2;
  if (0x4F92L < fn2(p | (ab2 = fn1(o, o))))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab2)
    break;

  int ab3;
  if (0x4F92L < fn2(p | (ab3 = fn1(o, o))))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab3)
    break;

  int ab4;
  if (0x4F92L < fn2(p | (ab4 = fn1(o, o))))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab4)
    break;

  return 0;
}