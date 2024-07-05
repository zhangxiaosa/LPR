int fe;
char fn1() {
  if (fe) {
    fn1();
    return 0;
  }
  fn1();
  return 0;
}
int main() {}