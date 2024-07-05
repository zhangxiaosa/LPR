int f;

int fn1() {
  if (f) {
    f = 6;
    fn1();
    const int j = 0xEEACFBBF;
    return j;
  }
  fn1();
  int j;
  return j;
}