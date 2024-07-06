char p;
int fn3(p1_arg, p2) { return p2 == 0 || p1_arg && p2 ? p1_arg : p1_arg % p2; }
static unsigned fn7(short p1_arg) {
  unsigned af;
  p = fn3(p1_arg, p1_arg);
  if (p)
    for (af = 0; af <= 49; af = af + 8) {
      af || (p1_arg = fn3(af, 0xBC2AB98CL));
      if (!p)
        break;
      p1_arg =
          (0x60781BCDL >= fn3(fn3(0x809CL, p1_arg) > 0xB5L, p1_arg) != p1_arg ^
           4294967287UL) -
          p1_arg;
      p = fn3(0x7D765DB6L, p1_arg);
    }
  else
    p = fn3(fn3(p1_arg, p1_arg), 0x9CFB623FL);
}
int main() { fn7(1); }
