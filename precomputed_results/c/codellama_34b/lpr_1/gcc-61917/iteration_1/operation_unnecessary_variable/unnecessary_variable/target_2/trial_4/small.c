
int fn2(int p1_int, int p2_int) { return p1_int - p2_int; }
int fn3(p1_int) {
  for (int k = 0; k >= 0; k = k - 6)
    for (int l = 0; l < 1; l++)
      p1_int = fn2(0, p1_int);
  return p1_int;
}
int main() {}
