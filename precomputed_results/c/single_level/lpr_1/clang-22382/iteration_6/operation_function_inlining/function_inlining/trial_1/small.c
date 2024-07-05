struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  int q;
  {
    struct h p5;
    p5.k;
w1:
    goto w1;
  }
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
