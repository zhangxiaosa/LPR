
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, signed p2, unsigned p3, unsigned p4) {
  struct s p;
  p.k;
  goto w;
}

unsigned fn2(unsigned p1) {
  struct s p;
  for (;;) {
    p = fn1(p1, 0, p1, 3);
  }
}

int main() {}
