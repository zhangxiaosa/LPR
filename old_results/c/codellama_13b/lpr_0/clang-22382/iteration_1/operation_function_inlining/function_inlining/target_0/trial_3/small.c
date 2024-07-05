
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;

  // Inline function call to fn1
  p5.k = p3;

  for (;;) {
    struct s r = q;
    q = r;
  }
}

unsigned fn2(p1) {
  struct s q;

  // Inline function call to fn1
  q.k = p3;

  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {
  struct s p5;
  fn1(0, 0, p5);
}
