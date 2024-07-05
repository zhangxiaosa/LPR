
struct c {
  int e;
};

int e;

int fn1() {
  while (e) {
    e = 5;
  }
  return 0xEEACFBBF;
}

int main() {
  struct c f;
  f.e = 5;
  fn1();
  return 0;
}
