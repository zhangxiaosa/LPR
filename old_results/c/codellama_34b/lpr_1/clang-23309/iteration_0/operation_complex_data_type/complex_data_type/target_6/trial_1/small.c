
u_char p16;
u_char p16_cache;

void fn13() {
  s_short ae = 1UL;
  fn10(u, t);
  return ae;
}

void fn10(s_short p1, s_short p2) {
  s_short af = 0x2F2F6D26L;
  u_char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

void fn11(u_char p1, s_short p2, s_short p3, s_short p4) {
  s_short ai = 7L;
  s_short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

void fn12(s_short p1, s_short p2, u_char p3, s_short p4, s_short p5) {
  s_short al = 3L;
  s_short am = 1L;
  s_short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    s_short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1UL)
      v = 1UL;
  }
  return al;
}

void fn14(u_char p16_cache) {
  p16 = p16_cache;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
