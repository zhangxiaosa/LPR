f;

void fn1() {
  if (f) {
    f = 6;
    fn1();
  }
  fn1();
}

void main() {}
