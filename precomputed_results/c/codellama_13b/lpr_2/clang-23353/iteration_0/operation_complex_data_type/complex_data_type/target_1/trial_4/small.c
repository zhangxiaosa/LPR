
int i;
int fn1(int p1, int p2) {
  return p1 * p2;
}

int j;
int* fn2(unsigned p1, int* p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}

int main() {
  int i = 0;
  int j = 0;
  int* p2 = NULL;
  unsigned p1 = 0;
  char p3 = 0;

  p2 = fn2(p1, &i, p3);

  return 0;
}
