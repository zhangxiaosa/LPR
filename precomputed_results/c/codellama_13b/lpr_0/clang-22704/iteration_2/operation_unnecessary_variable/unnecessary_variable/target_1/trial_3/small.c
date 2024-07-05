
int fn1() {
  if (true)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  fn1();
  return 0xEEACFBBF;
}
int main() {}
