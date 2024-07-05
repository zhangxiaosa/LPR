long c;
unsigned int d;
unsigned int e;
unsigned int f;
unsigned int g;

struct h {
  int i;
  long j;
  unsigned int k;
};
unsigned int l;

static struct h fn1();

unsigned int fn2(unsigned int p1) {
  struct h p;
  fn1(l, p1, 3, p);
  for (;;) {
    struct h r1;
    p = r1 = p;
  }
}

struct h fn1(unsigned int p1, unsigned int p3, unsigned int p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
