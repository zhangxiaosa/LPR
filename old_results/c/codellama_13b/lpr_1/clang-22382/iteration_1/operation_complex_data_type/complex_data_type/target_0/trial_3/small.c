c
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, int p4, struct h p5) {
  p5.k;
  goto w;
}

int fn2(int p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  struct h p5;
  int p1;
  int q;
  fn1(q, 0, p1, 3, p5);
  while (1) {
    struct h r;
    p5 = r = p5;
  }
}
