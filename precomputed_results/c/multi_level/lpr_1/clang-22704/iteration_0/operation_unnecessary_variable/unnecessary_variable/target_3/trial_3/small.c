int fn1() {
  if (false) {
    // Remove the assignment to f
    // f = 6;
    fn1();
    int j = 0xEEACFBBF;
    return j;
  }
  fn1();
  int j;
  return j;
}
int main() {}
