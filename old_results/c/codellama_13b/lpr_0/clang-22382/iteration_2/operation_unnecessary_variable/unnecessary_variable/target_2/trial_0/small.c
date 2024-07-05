
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(struct s p5) {
  p5.k;
  goto w;
}

long fn2() {
  for (;;) {
    ;
  }
}

int main() {}
