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
    a h = 6L;
    if (f.e) {
      f.d = h;
      b j = 0xEEACFBBFL;
      return j;
    }
    b j;
    return j;
  }
  goto i;
  i:
    f.d = h;
    b j = 0xEEACFBBFL;
    return j;
}

int main() {
  fn1();
}