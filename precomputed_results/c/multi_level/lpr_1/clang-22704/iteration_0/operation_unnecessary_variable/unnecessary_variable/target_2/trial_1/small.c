int f;

int fn1() {
  if (f) {
    f = 6;
    fn1();
    return 0xEEACFBBF;
  }

  fn1();
  return 0;
}

int main() {}
