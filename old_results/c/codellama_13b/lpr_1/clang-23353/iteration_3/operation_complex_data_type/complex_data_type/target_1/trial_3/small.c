
int i;
char j;

char fn1(char p1, char p2) { return p1 * p2; }

char fn2(char p3) {
  for (p3 = 6; p3 != -7; p3--) {
    j ^= fn1(p3, i) && 1L;
  }
  return 0;
}

int main() {
  int i;
  char j;

  for (i = 6; i != -7; i--) {
    j ^= fn1(i, i) && 1L;
  }

  return 0;
}
