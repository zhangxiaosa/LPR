struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct original_data_type p;

  unsigned p1 = 0;
  struct original_data_type p5 = p;
w:
  p5.k;
  goto w;

  while (1) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {}
