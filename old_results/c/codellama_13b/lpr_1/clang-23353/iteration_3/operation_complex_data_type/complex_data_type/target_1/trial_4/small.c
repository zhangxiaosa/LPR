
int i;
char j;

char fn1(char p1, char p2) { return p1 * p2; }

char fn2(char p3) {
  j = fn1(p3, i) * (p3 - 6);
  return 0;
}

int main() { return 0; }
