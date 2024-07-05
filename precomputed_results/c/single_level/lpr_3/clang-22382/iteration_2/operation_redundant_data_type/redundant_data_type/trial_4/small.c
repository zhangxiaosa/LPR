static signed i;
static long j;
static unsigned k;

static void fn1(unsigned p1, unsigned p3, unsigned p4, signed i, long j, unsigned k) {
  k;
w:
  goto w;
}

unsigned fn2(p1) {
  signed i;
  long j;
  unsigned k;
  int q;
  fn1(q, p1, 3, i, j, k);
  for (;;) {
    signed i;
    long j;
    unsigned k;
    signed r;
    i = j = i;
  }
}

int main() {}
