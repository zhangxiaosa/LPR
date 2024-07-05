
int fn6(int p1, int p2) {
  int result = 0;
  for (int i = 0; i < 64; i++) {
    result += (p1 >> i) - (p2 >> i);
  }
  return result;
}
