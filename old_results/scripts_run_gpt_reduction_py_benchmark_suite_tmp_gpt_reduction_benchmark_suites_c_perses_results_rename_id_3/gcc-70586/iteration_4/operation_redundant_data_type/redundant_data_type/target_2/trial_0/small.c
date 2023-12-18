unsigned p;
unsigned q;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
unsigned u[6];
unsigned fn3(unsigned p1, unsigned p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
static unsigned fn7(unsigned p1) {
  unsigned ac;
  ac = fn3(p1, q);
  if (s) {
    unsigned ah;
    --p1;
    for (ah = 0; ah <= 49U; ah = ah + 8) {
      unsigned ah = 0;
      if (p1 || p1 + p1 || p1 && fn3(p1, 0xBC2AB98CL))
        ;
      else {
        ah = ac;
        if (!s)
          break;
      }
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) -
           ah;
      p = p1;
      ac = fn3(0x7D765DB6UL, u[4]);
    }
  } else
    t[2][0] = fn3(fn3(0, q), 0x9CFB623FL);
  return p1;
}
int main() {
  if (fn7(1U))
    ;
}