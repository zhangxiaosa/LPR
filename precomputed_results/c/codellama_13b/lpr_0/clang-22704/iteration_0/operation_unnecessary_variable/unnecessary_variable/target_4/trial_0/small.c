
int fn1() {
  if (f_e)
    goto i;
  fn1();
  int j = 0xEEACFBBF;
  return j;
i:
  f_d = 6;
  fn1();
  return j;
}
int main() {}
