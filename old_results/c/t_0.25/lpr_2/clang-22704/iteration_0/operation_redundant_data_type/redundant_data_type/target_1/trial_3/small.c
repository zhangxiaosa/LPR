int f;
char fn1() {
  int h = 6L;
  if (f) {
    f = h;
    fn1();
    return 0xEEACFBBFL;
  }
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
