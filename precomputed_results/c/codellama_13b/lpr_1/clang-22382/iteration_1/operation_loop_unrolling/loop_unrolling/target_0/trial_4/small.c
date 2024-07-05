c
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, int p4, struct h p5) {
  p5.k;
  struct h r;
  for (int i = 0; i < 10; i++) {
    p = r = p;
  }
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, p);
}

int main() {}
