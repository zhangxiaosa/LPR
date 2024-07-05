struct h {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1();

unsigned fn2(unsigned p1) {
  struct h p;
  fn1(l, p);
  for (;;) {
    struct h r1;
    p = r1 = p;
  }
}

struct h fn1(unsigned p1, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}