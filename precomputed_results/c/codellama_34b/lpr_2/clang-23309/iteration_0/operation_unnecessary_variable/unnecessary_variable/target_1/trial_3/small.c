
// Constant propagation optimization
int fn13() {
  int al = 3L;
  long am = 1L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    t = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(ao - fn4(fn6(am, an), 0xECL), t) & 1UL)
      v = 1;
  }
  return al;
}

// Copy propagation optimization
int fn13() {
  int al = 3L;
  long am = 1L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    t = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(ao - fn4(an, 0xECL), t) & 1UL)
      v = 1;
  }
  return al;
}

// Final optimized program
int main() {
  int al = fn13();
  p = v;
  fn1(p);
  return 0;
}
