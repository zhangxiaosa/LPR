
struct s1 {
  unsigned i, j;
  unsigned k;
};

struct s1 fn1(unsigned p1, struct s1 p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2(p1) {
  struct s1 q;
  fn1(0, q);
  for (;;) {
    struct s1 r = q;
    q = r;
  }
}

int main() {}
