int fn1() {
  int h = 6L;
  if (6L) {
    6L = h;
    fn1();
    return 0xEEACFBBFL;
  }
  fn1();
  return 0xEEACFBBFL;
}
int main() {}