
char fn1(char p1, char p2) { return p1 * p2; }

int *fn2(unsigned p1, int *p2) {
  for (int p3 = 6; p3 != -7; p3--)
    p2 ^= fn1(p3, 0) && 1;
  return p2;
}

int main() { return 0; }
