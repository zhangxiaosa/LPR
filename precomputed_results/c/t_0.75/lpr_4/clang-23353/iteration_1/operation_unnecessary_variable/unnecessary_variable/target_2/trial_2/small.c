char fn1(char p1) { return p1 * 0; }

int main() {
  char p3;
  for (p3 = 6; p3 != -7; p3--)
    h ^= fn1(p3) && 1L;
  return 0;
}