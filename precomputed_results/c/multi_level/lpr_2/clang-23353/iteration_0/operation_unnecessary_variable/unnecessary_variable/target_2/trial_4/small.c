char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j_h;
int *fn2(unsigned p1, int *p2, char p3) {
  for (int i = 6; i != -7; i--)
    j_h ^= fn1(i, i) && 1;
  return p2;
}

int main() { return 0; }
