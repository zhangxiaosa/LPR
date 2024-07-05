struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static unsigned fn1(unsigned p1, struct original_data_type p5) {
  // No code here as p5 is unused
w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;

  // Optimized out the unused variable p5 and the function call

  while (1) {
    struct original_data_type r;
    // Optimized out the copy assignment
    p = r;
  }
}

int main() {}