int fn1() {
  if (0)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  0 = 6;
  fn1();
  return 0xEEACFBBF;
}
int main() {}