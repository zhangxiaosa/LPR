f;
fn1() {
  if (f) {
    f = 6;
    fn1();
    j = 0xEEACFBBF;
    return j;
  }
  fn1();
  j;
  return j;
}
main() {}