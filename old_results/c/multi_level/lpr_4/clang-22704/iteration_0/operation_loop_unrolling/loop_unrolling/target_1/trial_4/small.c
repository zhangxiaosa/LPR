typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  a h = 6L;

  if (f.e) {
    f.d = h;
    fn1();
    b j = 0xEEACFBBFL;
    return j;
  }

  fn1();
  b j;
  return j;
}

int main() {
  // Unrolled loop
  if (f.e) {
    f.d = 6L;
    fn1();
    b j = 0xEEACFBBFL;
    f.d = 6L;
    fn1();
    f.d = 6L;
    fn1();
    f.d = 6L;
    fn1();
    f.d = 6L;
    fn1();
    f.d = 6L;
    fn1();
    f.d = 6L;
    fn1();
    f.d = 6L;
    fn1();
    f.d = 6L;
    fn1();

    return j;
  }

  fn1();
  int k;
  return k;
}
