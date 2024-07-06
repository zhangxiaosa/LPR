_Complex fe;
short fn1() {
  if (fe) {
    fe = 6L;
    fn1();
    return 0;
  }
  fn1();
  return 0;
}
int main() {}
