unsigned l;

unsigned fn1(unsigned, short, unsigned, int, long, int);
unsigned fn2(unsigned p1) {
  int p;
  int q;
  fn1(q, l, 3, p, l, p);
  for (;;) {
    int r;
    p = r = p;
  }
}

unsigned fn1(unsigned p1, short p3, unsigned p5, int p6i, long p6j, int p6k) {
  p6k;
w:;
  goto w;
}

int main() {}