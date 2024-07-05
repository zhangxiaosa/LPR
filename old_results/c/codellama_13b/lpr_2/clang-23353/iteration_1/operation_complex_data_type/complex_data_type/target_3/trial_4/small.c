
int i;
int j;
int n;
int p1;
int p2;

char fn1(char p1, char p2) { return p1 * p2; }

int fn2(int p1) {
  int n = 6;
  j = 0;
  int result = fn1(n, i);
  while (n != -7) {
    j ^= result && 1L;
    n--;
  }
  return j;
}

int main() { return 0; }
