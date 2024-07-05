
int fn1() {
  if (5)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  (5);
  fn1();
  return 0xEEACFBBF;
}
int main() {}
