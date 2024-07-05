unsigned char fn1(unsigned char p1, unsigned char p2) { return p1 * p2; }
int i;
signed j_h;
int main() {
  unsigned char p3;
  for (p3 = 6; p3 != -7; p3--)
    j_h ^= fn1(p3, (unsigned char)i) && 1L;
  return 0;
}