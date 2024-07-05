unsigned l;

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(short p2, unsigned p3, unsigned p4, struct h p5);

unsigned fn2() {
  struct h p;
  int q;
  fn1(l, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
