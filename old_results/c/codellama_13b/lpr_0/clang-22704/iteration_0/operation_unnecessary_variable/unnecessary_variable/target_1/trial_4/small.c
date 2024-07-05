
int fn1() {
  long h = 6;
  fn1();
  int j = 0xEEACFBBF;
  return j;
i:
  h = 6;
  fn1();
  return j;
}
int main() {}
