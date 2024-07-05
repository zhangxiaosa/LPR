
struct s {
  int i;
  int j;
  int k;
};

static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
}

unsigned fn2(p1) {
  struct s q;
  while (1) {
    struct s r = q;
    q = r;
  }
}

int main() {}
