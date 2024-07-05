int fn1() {
  if (true) {
    int j = 0xEEACFBBF;
    return j;
  }
  fn1();
  int j;
  return j;
}
int main() {}