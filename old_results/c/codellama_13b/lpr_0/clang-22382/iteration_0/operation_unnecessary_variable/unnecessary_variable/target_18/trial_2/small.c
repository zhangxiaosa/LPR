
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
  goto w;
}

unsigned fn2(unsigned p1) {
  struct s r = p5;
  for (;;) {
    r = r;
  }
}

int main() {}
