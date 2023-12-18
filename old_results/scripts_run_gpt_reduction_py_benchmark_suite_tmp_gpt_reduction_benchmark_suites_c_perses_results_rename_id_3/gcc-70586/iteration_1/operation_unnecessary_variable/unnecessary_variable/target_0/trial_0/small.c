short p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
int u[6];
short fn2(short p1, unsigned p2) { return p1; }
int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
unsigned fn4(unsigned p1) {}
static int fn7(short p1) {
  ac = fn3(p1, q);
  if (s) {
    for (; p1; --p1)
      ;
    for (unsigned af = 0; af <= 49; af = af + 8) {
      if (fn2(p1, 1L + p1 || p1 && fn4(fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        if (!r) {
          printf("l_1179=%lld\n", (long long)fn3(p1, 0xBC2AB98CL));
          break;
        }
      }
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - fn3(p1, q);
      p = fn3(0x7D765DB6L, u[4]);
    }
  } else
    t[2][0] = fn3(fn3(0, q), 0x9CFB623FL);
  return p1;
}
static int fn8() {
  if (fn7(1))
    ;
}
int main() { fn8(); }
