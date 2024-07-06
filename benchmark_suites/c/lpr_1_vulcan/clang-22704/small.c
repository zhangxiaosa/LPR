_Complex f;
char fn1() {
  if (f) {
    f = 6;
    fn1();
    int j = 0xEEACFBBF;
    return j;
  }
  fn1();
  int j;
  return j;
}
int main() {}
