
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, int p2, struct h p5) {
  while (true) {
    p5.k;
  }
}

unsigned fn2(p1) {
  struct h p;
  fn1(3, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
