struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, 3, 3, p);
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
