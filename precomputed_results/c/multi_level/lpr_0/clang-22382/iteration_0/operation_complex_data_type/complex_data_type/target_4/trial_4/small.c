struct original_data_type {
  unsigned k;
};

unsigned l;

static struct original_data_type fn1(struct original_data_type p5) {
  p5.k;

w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;
  fn1(p);
  for (;;) {
    struct original_data_type r;
    p = r;
  }
}

int main() {}
