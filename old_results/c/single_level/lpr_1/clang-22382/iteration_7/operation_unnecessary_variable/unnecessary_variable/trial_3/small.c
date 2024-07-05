struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static void fn1(unsigned, short, unsigned, struct h);

unsigned fn2(p1) {
  struct h p;
  fn1(l, p1, 3, p);

  for (;;) {
    struct h r;
    r = p;
  }
}

void fn1(unsigned p1, short p2, unsigned p3, struct h p5) {
  p5.k;

w:
  goto w;
}

int main() {}
