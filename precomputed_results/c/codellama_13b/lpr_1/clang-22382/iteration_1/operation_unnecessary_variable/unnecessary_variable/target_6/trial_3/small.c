
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, struct h p5) {
  p5;
w:;
  goto w;
}

int fn2(p1) {
  struct h p;
  fn1(0, 0, p1, p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
