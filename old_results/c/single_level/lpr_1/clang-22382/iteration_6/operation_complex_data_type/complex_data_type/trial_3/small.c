signed i;
long j;
unsigned k;

unsigned l;

static void fn1(unsigned, short, unsigned, unsigned, signed, long, unsigned);

unsigned fn2(p1) {
  signed i;
  long j;
  unsigned k;
  unsigned l;
  struct h p;
  int q;
  fn1(q, l, p1, 3, i, j, k);
  for (;;) {
    signed i;
    long j;
    unsigned k;
    struct h r;
    p = r = p;
  }
}

void fn1(unsigned p1, short p2, unsigned p3, unsigned p4, signed i, long j, unsigned k) {
  k;
w:
  goto w;
}

int main() {}
