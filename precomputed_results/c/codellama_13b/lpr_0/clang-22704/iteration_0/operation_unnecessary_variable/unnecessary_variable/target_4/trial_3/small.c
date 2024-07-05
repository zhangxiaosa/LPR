
int f_d;
int f_e;
int fn1() {
  if (0xEEACFBBF)
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
