
int fn1() {
  if (true)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  e = 5;
  fn1();
  return 0xEEACFBBF;
}
int main() {}
