char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j_h;

void fn2() {
  char p3 = 6;
  char temp;
  for (; p3 != -7; p3--)
    temp = fn1(p3, i) && 1L;
}

int main() {
  return 0;
}