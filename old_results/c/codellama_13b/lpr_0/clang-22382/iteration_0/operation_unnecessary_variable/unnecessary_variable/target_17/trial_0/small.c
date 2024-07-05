
struct s {
  int i;
  long j;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
}

unsigned fn2(unsigned p1) {
  struct s q;
  fn1(0, p1, q);
}

int main() {}
