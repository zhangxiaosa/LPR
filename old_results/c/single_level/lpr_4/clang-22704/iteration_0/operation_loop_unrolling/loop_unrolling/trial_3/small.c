typedef int a;
typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  a h = 6L;

loop_start:
  f.d = h;

  fn1();
  fn1();
  fn1();
  fn1();

  b j = 0xEEACFBBFL;
  return j;
}

int main() {
  fn1();
  return 0;
}