typedef short a;
typedef int b;
typedef long c;
typedef unsigned int d;
typedef unsigned int e;
typedef unsigned int f;
typedef unsigned int g;

struct h {
  int i;
  long j;
  unsigned int k;
};

unsigned int l;
static struct h fn1(unsigned int, short, unsigned int, unsigned int, struct h);

unsigned int fn2(unsigned int p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
