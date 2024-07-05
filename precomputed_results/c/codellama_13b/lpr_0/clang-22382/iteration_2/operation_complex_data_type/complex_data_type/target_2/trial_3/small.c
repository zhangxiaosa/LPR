
int i;
int j;
int k;

struct s {
  int i;
  int j;
  int k;
};

static struct s fn1(int p1, struct s p5) {
  p5.k;
w:;
  goto w;
}

int fn2() {
  struct s q;
  fn1(0, q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {}
