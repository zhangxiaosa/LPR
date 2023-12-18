struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  unsigned p_i;
  long p_j;
  unsigned p_k;

  static struct original_data_type fn1(unsigned p1, short p2, struct original_data_type p5) {
    p5.k;
  w:
    goto w;
  }

  struct original_data_type p;
  fn1(0, 0, p);
  for (;;) {
    struct original_data_type r;
    p.i = r.i = p_i;
    p.j = r.j = p_j;
    p.k = r.k = p_k;
  }
}

int main() {}
