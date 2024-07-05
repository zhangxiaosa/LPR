short a;
int b;
long c;
unsigned d;
unsigned e;
unsigned f;
unsigned g;

struct h {
  signed int i;
  long j;
  unsigned int k;
};

unsigned d l;

static struct h fn1(unsigned f, short a, unsigned g, unsigned d, struct h);

unsigned e fn2(unsigned e p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned f p1, short a p2, unsigned g p3, unsigned d p4,
                  struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {}