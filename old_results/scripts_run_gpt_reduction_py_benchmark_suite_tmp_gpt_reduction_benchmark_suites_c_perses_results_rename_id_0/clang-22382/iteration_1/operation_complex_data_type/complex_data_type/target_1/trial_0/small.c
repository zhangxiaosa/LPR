struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static struct original_data_type fn1(unsigned p1, short p2,
                                     struct original_data_type p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  int p_i;     
  long p_j;       
  unsigned p_k;   

  struct original_data_type p;

  p_i = p.i;
  p_j = p.j;
  p_k = p.k;

  fn1(0, 0, p);

  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {}