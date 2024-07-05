int fn1() {
  if (false)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  fn1();
  return 0xEEACFBBF;
}
int main() {}
