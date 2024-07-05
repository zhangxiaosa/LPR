short a;
int b;
long c;
unsigned d;
unsigned e;
unsigned f;
unsigned g;

struct h {
  int i;
  long j;
  unsigned k;
};

d l;

int fn1(unsigned f, short a, unsigned g, unsigned d, struct h);

unsigned fn2(unsigned p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
