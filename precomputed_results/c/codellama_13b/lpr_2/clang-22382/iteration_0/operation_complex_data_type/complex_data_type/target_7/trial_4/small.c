
struct h {
  int i;
  long j;
  int k;
};

unsigned l;

int main() {}

struct h fn1(unsigned p_num_iterations, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  p5.k;
  for (int i = 0; i < p_num_iterations; i++) {
    p5.k = p5.k + 1;
  }
  return p5;
}

unsigned fn2(unsigned p_num_iterations) {
  struct h p;
  int q;
  fn1(q, l, p_num_iterations, 3, p);
  for (int i = 0; i < p_num_iterations; i++) {
    p.k = p.k + 1;
  }
  return p.k;
}
