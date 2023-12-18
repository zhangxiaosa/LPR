char fn1() {
  if (f.e) {
    f.d = 6;
    fn1();
    int j = 0xEEACFBBF;
    return j;
  }
  fn1();
  int j;
  return j;
}

int main() {}
