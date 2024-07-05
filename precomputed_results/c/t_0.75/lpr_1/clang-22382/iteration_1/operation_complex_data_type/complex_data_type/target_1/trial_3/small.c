struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;
short p5_i;
long p5_j;
unsigned p5_k;

static struct h fn1(unsigned, short, short, long, unsigned);
unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, p5_i, p5_j, p5_k);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

static struct h fn1(unsigned p1, short p2, short p5_i, long p5_j, unsigned p5_k) {
w:;
  goto w;
}

int main() {}