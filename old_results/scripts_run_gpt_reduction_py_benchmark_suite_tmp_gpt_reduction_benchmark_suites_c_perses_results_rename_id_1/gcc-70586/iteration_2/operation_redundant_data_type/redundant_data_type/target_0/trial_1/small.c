p1_type fn3(p1_type p1, p2_type p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
p_type p;
static r_type r = 0x2A52L;
s_type s = 0x03F238A4L;
t_type t[7][1];
static fn7(p1_type p1) {
  if (s) {
    unsigned af = 0;
    for (; af <= 49; af += 8) {
      if (p1 && fn3(p1, p2_type(0xBC2AB98CL)))
        ;
      else if (!r) {
        printf("l_1179=%lld\n", (long long)fn3(p1, p2_type(0xBC2AB98CL)));
        break;
      }
      p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - fn3(p1, p);
      p = p1;
    }
  } else
    t[2][0] = fn3(fn3(p1, p1), 0x9CFB623FL);
  return p1;
}
static fn8() {
  if (fn7(p1_type(1)))
    ;
}
main() { fn8(); }