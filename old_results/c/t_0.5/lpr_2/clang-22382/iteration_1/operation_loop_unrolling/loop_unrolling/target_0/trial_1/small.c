typedef long c;

typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

struct h {
  signed i;
  c j;
  unsigned k;
};

d l;

static struct h fn1();

e fn2(p1) {
  struct h p;
  fn1(l, p);
  struct h r;
  p = r = p;
}

struct h fn1(f p1, struct h p5) {
  p5.k;
}

int main() {}
