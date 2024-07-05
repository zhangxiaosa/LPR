int fn1() {
  if (0) {
    f = 6L;
    fn1();
    return 0xEEACFBBFL;
  }
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
