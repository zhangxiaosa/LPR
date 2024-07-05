
struct h {
  int i;
  long j;
  int k;
};
unsigned l;

static struct h fn1(unsigned p1, int p2, unsigned p3, unsigned p4,
                    struct h p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  fn1(3, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  int i;
  long j;
  int k;
  unsigned l;

  struct h p;
  fn1(3, l, p1, 3, p);

  i = p.i;
  j = p.j;
  k = p.k;

  l = 3;

  for (;;) {
    struct h r;
    p = r = p;
  }
}
