
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
  for (;;) {
    struct s r = fn1(struct s);
    q = r;
  }
}

int main() {}
