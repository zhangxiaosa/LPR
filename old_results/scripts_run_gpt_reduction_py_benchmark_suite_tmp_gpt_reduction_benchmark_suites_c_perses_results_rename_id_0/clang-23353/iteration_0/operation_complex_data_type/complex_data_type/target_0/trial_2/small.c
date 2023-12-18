char fn1(char p1, char p2) { return p1 * p2; }

int i;
signed h;

int *fn2(unsigned p1, int *p2, char p3) {
  int *new_p2 = p2;
  char new_p3 = p3;
  int i;
  int h;

  for (new_p3 = 6; new_p3 != -7; new_p3--)
    h ^= fn1(new_p3, i) && 1L;

  return new_p2;
}

int main() { return 0; }
