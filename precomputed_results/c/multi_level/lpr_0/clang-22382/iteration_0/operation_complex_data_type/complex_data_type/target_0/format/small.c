struct original_data_type {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct original_data_type fn1(unsigned, short, unsigned, unsigned, struct original_data_type);

unsigned fn2(p1) {
  struct original_data_type p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}

struct original_data_type fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct original_data_type p5) {
  p5.k;
w:
  goto w;
}

int main() {}
