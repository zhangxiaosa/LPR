
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p2, int p3, int p4, struct h p5) {
p5.k;
}

int fn2(struct h p, struct h r) {
  fn1(0, p.k, 3, p);
  for (;;) {
    p = r = p;
  }
}

int main() {}
