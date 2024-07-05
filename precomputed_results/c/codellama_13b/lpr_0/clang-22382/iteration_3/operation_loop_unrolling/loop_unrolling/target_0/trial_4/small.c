
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(struct s p5) {
  p5.k;
w:;
  goto w;
}

long fn2() {
  struct s q;
  fn1(q);
  int n = 0;
  if (n % 4 == 0) {
    struct s r = q;
    q = r;
    n += 4;
  }
  if (n % 4 == 1) {
    struct s r = q;
    q = r;
    n += 4;
  }
  if (n % 4 == 2) {
    struct s r = q;
    q = r;
    n += 4;
  }
  if (n % 4 == 3) {
    struct s r = q;
    q = r;
    n += 4;
  }
}

int main() {}
