
struct h {
  int i;
  long j;
  int k;
};

int l;

static struct h fn1(int p1, int p2, int p3, int p4, struct h p5) {
  int i = p5.i;
  long j = p5.j;
  int k = p5.k;

  goto w;
}

int fn2(int p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  // ...
}
