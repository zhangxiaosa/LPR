int fn1() {
  if (0) {
    fn1();
    return 0;
  }
  fn1();
  return 0;
}
int main() {}