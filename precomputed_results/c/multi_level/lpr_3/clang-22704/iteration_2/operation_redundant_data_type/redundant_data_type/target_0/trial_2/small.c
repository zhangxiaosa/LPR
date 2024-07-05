int fe;
int fn1() {
  if (fe) {
    int fd = 6L; // substitution
    fn1();
    return 0;
  }
  fn1();
  return 0;
}
int main() {}