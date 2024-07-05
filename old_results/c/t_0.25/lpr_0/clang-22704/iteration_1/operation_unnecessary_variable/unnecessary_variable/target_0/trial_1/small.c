int fn1() {
  goto i;
  fn1();
  return 0xEEACFBBF;
i:
  fn1();
  return 0xEEACFBBF;
}
int main() {}
