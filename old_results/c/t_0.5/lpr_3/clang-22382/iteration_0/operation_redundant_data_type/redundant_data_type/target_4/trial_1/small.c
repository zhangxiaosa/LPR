typedef unsigned f;
typedef unsigned g;

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, g p3, unsigned p4, struct h p5) {
  for (;;)
    p5.k;
}

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}