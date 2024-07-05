
int fn1() {
  long h = 6;
  if (f_e)
    goto i;
  fn1();
  int j = 0xEEACFBBF;
  return j;
i:
  int j = h;
  fn1();
  return j;
}
int main() {}
