
int i;
int *i_ptr = &i;

char fn1(char p1, char p2) {
  return p1 * p2;
}

int *fn2(int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    *i_ptr ^= fn1(p3, *i_ptr) && 1L;
  return p2;
}

int main() {
  i = 0;
  i_ptr = &i;
  fn2(NULL, 0);
  return 0;
}
