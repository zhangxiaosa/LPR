int fn1() {
  if (false) {
    fn1();
    int j = 0xEEACFBBF;
    return j;
  }
  fn1();
  int j;
  return j;
}
int main() {}
