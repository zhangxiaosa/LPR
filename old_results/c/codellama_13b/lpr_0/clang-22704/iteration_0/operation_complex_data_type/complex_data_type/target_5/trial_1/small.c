
struct c {
  int d;
  int e;
};

int fn2() {
  return 0xEEACFBBFL;
}

int fn1() {
  return fn2();
}

int main() {
  fn1();
}
