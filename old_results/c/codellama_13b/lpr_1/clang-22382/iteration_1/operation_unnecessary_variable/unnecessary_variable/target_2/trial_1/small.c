
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, int p4, struct h p5) {
  p5.k;
  goto w;
}

int fn2() {
  struct h p;
  int q = 0;
  fn1(q, 0, 3, p);
  while (1) {
    struct h r = p;
    p = r;
  }
}

int main() {}
