int fn1() {
  int h = 6L;
  goto i;
  fn1();
  return 0xEEACFBBF;
i:
  fn1();
  return 0xEEACFBBF;
}
int main() {}
