typedef int a;
typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  a h = 6L;

  f.d = h;
  fn1();

  // Unrolled loop body 1
  b j1 = 0xEEACFBBFL;
  return j1;

  // Unrolled loop body 2
  b j2;
  return j2;
}

int main() {}
