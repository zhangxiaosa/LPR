struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned fn1(unsigned p1, struct original_data_type p5) {
  // No code inside
w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;
  while (1) {
    struct original_data_type r;
  }
}

int main() {}
