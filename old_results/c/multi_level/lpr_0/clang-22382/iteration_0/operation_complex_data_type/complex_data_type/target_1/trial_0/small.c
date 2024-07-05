struct original_data_type {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct original_data_type fn1(unsigned, short, unsigned, unsigned,
                                     struct original_data_type);

unsigned fn2(p1) {
  signed i;
  long j;
  unsigned k;
  int q;
  fn1(q, l, p1, 3, {i, j, k});
  for (;;) {
    struct original_data_type r;
    i = r.i;
    j = r.j;
    k = r.k;
  }
}

struct original_data_type fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                              struct original_data_type p5) {
  p5.k;
w:
  goto w;
}

int main() {}
