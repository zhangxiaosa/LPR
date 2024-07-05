
int i;
long j;
unsigned k;
unsigned l;

struct s fn1(unsigned p1, signed p2, unsigned p3, unsigned p4, struct s p5) {
  p5.k;
  goto w;
}

unsigned fn2(unsigned p1) {
  struct s p;
  unsigned q;
  fn1(q, 0, p1, 3, p);
  for (;;) {
    struct s r = p;
    p = r;
  }
}

int main() {
  struct s s;
  i = s.i;
  j = s.j;
  k = s.k;

  return 0;
}
