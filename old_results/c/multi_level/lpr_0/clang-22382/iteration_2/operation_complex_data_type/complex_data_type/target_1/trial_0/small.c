typedef struct {
  int i;
  long j;
  unsigned k;
} original_data_type;

static unsigned fn1(unsigned p1, unsigned p5_k) {
  // No statements in this function
  return 0;
}

unsigned fn2() {
  original_data_type p;
  fn1(0, p.k);
  while (1) {
    original_data_type r;
    p = r;
  }
  return 0;
}

int main() {
  return 0;
}