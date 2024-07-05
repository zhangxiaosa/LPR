int fn1() {
  if (0)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  6L;
  fn1();
  return 0xEEACFBBF;
}
int main() {}
