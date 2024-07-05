typedef short a;
typedef int b;
typedef long c;
typedef unsigned d;
typedef unsigned e;

struct h {
  signed i;
  c j;
  unsigned k;
};

d l;

static struct h fn1(unsigned p1) {
w:
  goto w;
}

e fn2(p1) {
  struct h p;
  b q;
  fn1(q);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
