int fn1() {
  if (0) {
    6;
    fn1();
    int j = 0xEEACFBBF;
    return j;
  }
  fn1();
  int j;
  return j;
}

int main() {}
