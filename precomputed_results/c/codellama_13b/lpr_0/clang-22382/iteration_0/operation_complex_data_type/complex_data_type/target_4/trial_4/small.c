
struct s {
  int i;
  long j;
  unsigned k;
};

unsigned fn1(unsigned p1, signed p2) {
  struct s p;
  signed q;
  p.k = q;
  goto w;
}

unsigned fn2(unsigned p1) {
  struct s p;
  signed q;
  fn1(q, 0, p1, 3, p);
  for (;;) {
    struct s r = p;
    p = r;
  }
}

int main() {}
