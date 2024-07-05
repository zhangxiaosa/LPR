
struct s {
  long i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, struct s p5) {
  p5.k;
  goto w;
}

unsigned fn2(p1) {
  struct s q;
  struct s r;
  for (;;) {
    r = q;
    q = r;
  }
}

int main() {}
