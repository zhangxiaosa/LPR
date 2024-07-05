int f;

int fn1() {
  if (f) {
    f = 6L;
    fn1();
    fn1();
    fn1();
    fn1();
    fn1();
    fn1();
    return 0xEEACFBBFL;
  }
  fn1();
  fn1();
  fn1();
  fn1();
  fn1();
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
