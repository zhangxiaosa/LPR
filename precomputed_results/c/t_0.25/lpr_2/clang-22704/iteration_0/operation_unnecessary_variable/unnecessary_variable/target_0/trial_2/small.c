int fn1() {
  int h = 6L;
  if (0) {
    fn1();
    return 0xEEACFBBFL;
  }
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
