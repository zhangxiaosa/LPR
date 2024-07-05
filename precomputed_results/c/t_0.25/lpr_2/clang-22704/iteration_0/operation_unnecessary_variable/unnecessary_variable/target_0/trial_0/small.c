int fn1() {
  int h = 6L;
  if (h) {
    h = h;
    fn1();
    return 0xEEACFBBFL;
  }
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
