
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(unsigned p1) {
  fn1(0, p1, struct s {0,0,0});
  for (;;) {
    struct s r = struct s {0,0,0};
    r = r;
  }
}

int main() {}
