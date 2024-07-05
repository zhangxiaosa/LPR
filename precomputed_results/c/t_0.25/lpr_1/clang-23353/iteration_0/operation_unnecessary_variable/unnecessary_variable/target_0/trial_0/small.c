char fn1(char p1, char p2) { return p1 * p2; }

int i;
signed j;
int *fn2(unsigned p1, int *p2, char p3) {
  char fn1_result = p3 * i;
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1_result && 1L;
  return p2;
}

int main() { return 0; }
