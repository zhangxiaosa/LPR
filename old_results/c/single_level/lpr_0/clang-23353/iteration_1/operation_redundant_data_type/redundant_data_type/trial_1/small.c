char fn1(int p1, int p2) { return p1 * p2; }

signed j_h;
int i;

int main() {
  char p3;
  for (p3 = 6; p3 != -7; p3--)
    j_h ^= fn1(p3, (char)i) && 1L;
  return 0;
}