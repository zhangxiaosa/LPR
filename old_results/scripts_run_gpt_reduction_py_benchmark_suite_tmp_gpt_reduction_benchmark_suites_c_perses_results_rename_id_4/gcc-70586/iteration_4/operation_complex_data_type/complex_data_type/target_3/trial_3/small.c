int p;
unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;

int fn3(int p1_arg, int p2) {
  return p2 == 0 || p1_arg && p2 ? p1_arg : p1_arg % p2;
}

static unsigned fn7_original(short);

unsigned fn7_original(short p1_arg) {
  int ai;
  unsigned af;
  int ag0, ag1, ag2, ag3, ag4, ag5, ag6, ag7, ag8, ag9, ag10, ag11, ag12, ag13, ag14, ag15, ag16, ag17, ag18, ag19, ag20, ag21, ag22, ag23, ag24, ag25, ag26, ag27, ag28, ag29, ag30, ag31, ag32, ag33, ag34, ag35;
  ag0 = ag1 = ag2 = ag3 = ag4 = ag5 = ag6 = ag7 = ag8 = ag9 = ag10 = ag11 = ag12 = ag13 = ag14 = ag15 = ag16 = ag17 = ag18 = ag19 = ag20 = ag21 = ag22 = ag23 = ag24 = ag25 = ag26 = ag27 = ag28 = ag29 = ag30 = ag31 = ag32 = ag33 = ag34 = ag35 = 1L;
  unsigned ah;
  ai = fn3(p1_arg, p);
  if (s) {
    --p1_arg;
    for (af = 0; af <= 49; af = af + 8) {
      if (p1_arg,
          ag6 * 5 * 1 + p1_arg || p1_arg && (ai = fn3(p1_arg, 0xBC2AB98CL), 9))
        ;
      else {
        ah = ai;
        if (!r)
          break;
      }
      p1_arg = (0x60781BCDL >= fn3(fn3(0x809CL, p1_arg) > 0xB5L, p1_arg) != p1_arg ^ 4294967287UL) - ah;
      p = p1_arg;
      ai = fn3(0x7D765DB6L, p);
    }
  } else
    p = fn3(fn3(p1_arg, p), 0x9CFB623FL);
  return p1_arg;
}

int main() {
  if (fn7_original(1))
    ;
}