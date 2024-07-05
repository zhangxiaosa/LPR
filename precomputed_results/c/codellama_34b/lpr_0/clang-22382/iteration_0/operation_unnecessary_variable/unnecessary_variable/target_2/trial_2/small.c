
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  p5.j;
}

unsigned fn2(p1) {
  struct h p;
  unsigned q;
  fn1(q, l, p1, 3, p);
}

int main() {}
