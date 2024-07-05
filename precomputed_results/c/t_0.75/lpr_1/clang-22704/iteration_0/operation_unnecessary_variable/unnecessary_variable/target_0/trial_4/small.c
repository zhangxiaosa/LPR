char fn1() {
  int h = 6L;
  goto i;
  fn1();
i:
  fn1();
  return 0;
}
int main() {}