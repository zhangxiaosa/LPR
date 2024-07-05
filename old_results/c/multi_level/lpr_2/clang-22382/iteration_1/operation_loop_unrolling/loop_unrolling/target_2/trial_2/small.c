typedef long c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct h {
  signed i;
  c j;
  unsigned k;
};

d l;

static struct h fn1();
e fn2(p1) {
  struct h p;
  fn1(l, p1, 3, p);

  // Loop unrolling optimization: remove the loop entirely
  struct h r;
  p = r = p;

}

struct h fn1(f p1, g p3, d p4, struct h p5) {
  p5.k;
  w:
  goto w;
}

int main() {}
