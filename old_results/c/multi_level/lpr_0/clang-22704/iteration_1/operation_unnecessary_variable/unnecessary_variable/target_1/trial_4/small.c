int f_d;
int f_e;
int fn1() {
  if (0)  // Replaced `f_e` with `0`
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  f_d = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
