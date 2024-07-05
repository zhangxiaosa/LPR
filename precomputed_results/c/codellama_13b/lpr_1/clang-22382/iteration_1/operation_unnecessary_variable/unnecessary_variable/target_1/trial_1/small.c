
struct h {
  int i;
  long j;
};

static struct h fn1(int p1, int p2, int p3, int p4, struct h p5) {
  goto w;
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
