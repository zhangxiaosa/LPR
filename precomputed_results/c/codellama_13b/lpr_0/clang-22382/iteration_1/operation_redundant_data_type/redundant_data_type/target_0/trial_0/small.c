
struct s {
  int i;
  long j;
  int k;
};

static struct s fn1(int p1, int p3, struct s p5) {
  p5.k;
w:;
  goto w;
}

int fn2(int p1) {
  struct s q;
  fn1(0, p1, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {}
