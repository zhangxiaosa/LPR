typedef long long_type;

typedef unsigned unsigned_type;

struct h {
  int i;
  long_type j;
  unsigned_type k;
};

unsigned_type l;

static struct h fn1();

unsigned_type fn2(p1) {
  struct h p;
  fn1(l, p);
  for (;;) {
    struct h r1;
    p = r1;
  }
}

struct h fn1(unsigned_type p1, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
