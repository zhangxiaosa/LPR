
struct h {
  signed i;
  long j;
  unsigned k;
};
unsigned l;

static unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    signed i, long j, unsigned k) {
  j;
w:;
  goto w;
}

unsigned fn2(p1) {
  signed i;
  long j;
  unsigned k;
  struct h p;
  unsigned q;
  fn1(q, l, p1, 3, i, j, k);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
