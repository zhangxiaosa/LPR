
struct h {
  int i;
  long j;
  int k;
};

int fn1_i(unsigned p1, int p2, struct h p5) {
  return p5.i;
}

long fn1_j(unsigned p1, int p2, struct h p5) {
  return p5.j;
}

int fn1_k(unsigned p1, int p2, struct h p5) {
  return p5.k;
}

struct h fn2(unsigned p1) {
  struct h p;
  fn1(3, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  struct h p5;
  p5.i = 0;
  p5.j = 0;
  p5.k = 0;
  fn2(3);
  return 0;
}
