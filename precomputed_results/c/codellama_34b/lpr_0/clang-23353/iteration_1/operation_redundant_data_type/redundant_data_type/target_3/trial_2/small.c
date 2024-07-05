
int fn2(int p1, int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    p2 ^= p1 && 1L;
  return p2;
}
int main() { return 0; }
