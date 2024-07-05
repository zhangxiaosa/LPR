
typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  a h = 6L;
  b j;
  if (f.e) {
    f.d = h;
    j = 0xEEACFBBF;
  } else {
    fn1();
    j = 0xEEACFBBF;
  }
  return j;
}
int main() {}
