unsigned l;

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned, unsigned, unsigned, struct h);

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, unsigned p3, unsigned p4, struct h p5) {
  goto w;
w:
  goto w;
}

int main() {}
