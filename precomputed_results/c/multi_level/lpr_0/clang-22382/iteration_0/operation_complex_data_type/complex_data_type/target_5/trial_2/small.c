struct original_data_type {
  int i;
  long j;
  unsigned int k;
};

unsigned int l;

static struct original_data_type fn1(unsigned int p1, short p2, unsigned int p3,
                                     unsigned int p4,
                                     struct original_data_type p5) {
  p5.k;

w:
  goto w;
}

unsigned int fn2(unsigned int p1) {
  struct original_data_type p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct original_data_type r;
    p.i = r.i = p.i;
    p.j = r.j = p.j;
    p.k = r.k = p.k;
  }
}

int main() {}.