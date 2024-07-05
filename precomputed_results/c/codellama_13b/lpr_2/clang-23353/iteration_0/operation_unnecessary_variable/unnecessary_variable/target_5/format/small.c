
char fn1(char p1, char p2) {
  return p1 * p2;
}

int i;
int j;
int fn2(unsigned p1) {
  for (p1 = 6; p1 != -7; p1--)
    j ^= fn1(p1, i) && 1L;
  return j;
}

int main() {
  return 0;
}
