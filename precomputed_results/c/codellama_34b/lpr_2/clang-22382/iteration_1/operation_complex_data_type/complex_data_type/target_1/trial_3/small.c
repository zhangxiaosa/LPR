
struct h2 {
  int i;
  long j;
};

int fn1(int p1, short p2, int p3, int p4, struct h2* p5) {
  p5->k;
w:;
  goto w;
}

int fn2(p1) {
  struct h2 p;
  fn1(p1, l, p1, 3, &p);
  for (;;) {
    struct h2 r;
    p = r = p;
  }
}

int main() {
  fn2(1);
}
