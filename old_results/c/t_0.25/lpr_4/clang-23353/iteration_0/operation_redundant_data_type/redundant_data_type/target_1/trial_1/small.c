unsigned char fn1(unsigned char p1, unsigned char p2) { return p1 * p2; }

signed int i;
signed int j;

signed int *fn2(unsigned int p1, signed int *p2, unsigned char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}

signed int main() { return j; }