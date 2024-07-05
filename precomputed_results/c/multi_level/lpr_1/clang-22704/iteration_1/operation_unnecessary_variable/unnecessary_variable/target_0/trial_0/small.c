int fn1() {
  if (false) {
    int j = 0xEEACFBBF;
    return j;
  }
  fn1();
  int j;
  return j;
}

int main() {}
