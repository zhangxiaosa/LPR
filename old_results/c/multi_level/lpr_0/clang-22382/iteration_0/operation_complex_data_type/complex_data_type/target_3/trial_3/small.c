struct original_data_type {
  signed i;
  long j;
  unsigned k;
};

static struct original_data_type fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
  // Removed unused statement p5.k;
}

unsigned fn2(unsigned p1) {
  int q;
  fn1(q, p1, 3);
  for (;;) {
    struct original_data_type r;
    r = r;
  }
}

int main() {}
