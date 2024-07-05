struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, struct h);

unsigned fn2() {
  struct h p;
  fn1(0, l, p);
  for (;;) {
    p = p;
  }
}

struct h fn1(unsigned p1, short p2, struct h p5) {
  3;
w:;
}

int main() {}
