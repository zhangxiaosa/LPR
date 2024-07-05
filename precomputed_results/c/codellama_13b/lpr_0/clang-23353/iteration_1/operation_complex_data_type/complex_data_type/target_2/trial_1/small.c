c
unsigned char fn1(unsigned char p1, unsigned char p2) {
  return p1 * p2;
}

int i;
unsigned char j;

int fn2(int p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return 0;
}

int main() {
  return 0;
}
