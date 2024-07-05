c
int fn1() {
  long h = 6;
  if (0)
    goto i;
  fn1();
  int j = 0xEEACFBBF;
  return j;
i:
  // f_d = h;
  fn1();
  return j;
}
int main() {}
