typedef char b;
struct c {
  int d;
  int e;
};
struct c f;
b fn1() {
  int h = 6L;
  if (f.e) {
    f.d = h;
    fn1();
    return 0xEEACFBBFL;
  }
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
