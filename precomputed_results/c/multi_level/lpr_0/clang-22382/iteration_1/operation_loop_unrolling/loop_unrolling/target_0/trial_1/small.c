struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static struct original_data_type fn1(unsigned p1, short p2, struct original_data_type p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;
  fn1(0, 0, p);
  struct original_data_type r1;
  p = r1 = p;
  struct original_data_type r2;
  p = r2 = p;
  struct original_data_type r3;
  p = r3 = p;
  struct original_data_type r4;
  p = r4 = p;
  struct original_data_type r5;
  p = r5 = p;
}

int main() {}
