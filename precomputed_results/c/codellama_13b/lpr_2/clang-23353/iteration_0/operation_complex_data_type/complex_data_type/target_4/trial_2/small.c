
char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j;
int *fn2(unsigned int p1a, int p1b, int *p2a, int p2b, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2a;
}

int main() { return 0; }
