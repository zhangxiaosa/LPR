char fn1(char p1, char p2) { return p1 * p2; }

signed i;
signed j;
signed *fn2(unsigned p1, signed *p2, signed p3) {
  j ^= fn1(p3 - 2, i) && 1L;
  j ^= fn1(p3 - 3, i) && 1L;
  return p2;
}