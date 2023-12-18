char fn1(char p1, char p2) {
  return p1 * p2;
}

char i;
signed char j_h;

char main() {
  char p3;
  for (p3 = 6; p3 != -7; p3--)
    j_h ^= fn1(p3, i) && 1L;
}