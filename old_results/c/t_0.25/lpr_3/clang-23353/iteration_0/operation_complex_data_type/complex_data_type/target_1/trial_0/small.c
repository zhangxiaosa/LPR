int fn1(int p1, int p2) { return p1 * p2; }

int h;
int i;

int main() {
  int p3;
  for (p3 = 6; p3 != -7; p3--)
    h ^= fn1(p3, i) && 1L;
  return 0;
}