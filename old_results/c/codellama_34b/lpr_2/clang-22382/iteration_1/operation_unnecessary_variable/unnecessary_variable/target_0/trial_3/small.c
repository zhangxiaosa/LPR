
struct h {
  int i;
  // long j;  // unused variable, optimize it out
  int k;
};

int fn1(int p1, short p2, int p3, int p4, struct h p5) {
  p5.k;
}

int fn2(p1) {
  struct h p;
  fn1(p1, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
