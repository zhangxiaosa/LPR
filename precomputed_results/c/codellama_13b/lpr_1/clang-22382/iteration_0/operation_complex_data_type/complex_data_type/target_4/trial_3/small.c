
struct h_all {
  int i;
  long j;
  int k;
  int l;
};

static struct h fn1(int p1, int p2, int p3, int p4, struct h_all p5) {
  p5.k;
  goto w;
}

int fn2(p1) {
  struct h_all p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h_all r;
    p = r = p;
  }
}

int main() {}
