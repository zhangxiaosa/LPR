struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static struct original_data_type fn1(unsigned p1, short p2,
                                     struct original_data_type p5) {
  p5.k;
w1:
  goto w2;
w2:
  goto w1;
}

unsigned fn2() {
  struct original_data_type p;
  fn1(0, 0, p);
  struct original_data_type r;
  p = r = p;
  p = r = p;
  return 0;
}

int main() {
  fn2();
  return 0;
}