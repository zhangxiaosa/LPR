
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(short p, unsigned p4, struct h p5) {
  p5.j;
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
