struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned, unsigned, unsigned, struct h);

void fn2() {
  struct h p;
  fn1(l, 3, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, unsigned p3, unsigned p4, struct h p5) {
  p5.k;

w:
  goto w;
}

int main() {}
