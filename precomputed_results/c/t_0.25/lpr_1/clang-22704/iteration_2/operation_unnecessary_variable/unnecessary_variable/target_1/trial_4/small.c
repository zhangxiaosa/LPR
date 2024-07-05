int f_d;
int fn1() {
  goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  f_d = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}