
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
  struct s r;
  for (;;) {
    r = r;
  }
}

int main() {}
