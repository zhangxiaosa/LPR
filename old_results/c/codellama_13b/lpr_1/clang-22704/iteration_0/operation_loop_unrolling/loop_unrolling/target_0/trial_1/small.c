
typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  a h = 6L;
  b j = 0xEEACFBBFL;
  if (f.e) {
    f.d = h;
    return j;
  } else {
    fn1();
    return j;
  }
}
int main() {}
