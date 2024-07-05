char fn1(char p1, char p2) { return p1 * p2; }

int i;
signed h;
int *fn2(unsigned p1, int *p2, signed p3) {
  p3 = 6;
  for (; p3 != -7; p3--)
    h ^= fn1(p3, i) && 1L;
  return p2;
}

int main() { return 0; }
