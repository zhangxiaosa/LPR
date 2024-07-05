char fn1() {
  goto i;
  fn1();
  return 0;
i:
  return 0;
}
int main() {}
