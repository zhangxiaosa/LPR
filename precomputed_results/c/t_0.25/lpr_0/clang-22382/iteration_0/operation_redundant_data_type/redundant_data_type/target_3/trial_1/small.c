typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5;
}

e fn2(p1) {
  struct h p;
  fn1(0, l, p1, 3, p);
}

int main() {}.