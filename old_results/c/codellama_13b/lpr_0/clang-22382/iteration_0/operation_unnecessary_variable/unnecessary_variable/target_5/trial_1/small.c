c
struct s {
  int i;
  long j;
};

static struct s fn1(unsigned p1, signed p2, unsigned p3, unsigned p4) {
  goto w;
w:;
}

unsigned fn2(p1) {
  struct s p;
  signed q;
  fn1(q, 0, p1, 3);
  for (;;) {
    struct s r = p;
    p = r;
  }
}

int main() {}
