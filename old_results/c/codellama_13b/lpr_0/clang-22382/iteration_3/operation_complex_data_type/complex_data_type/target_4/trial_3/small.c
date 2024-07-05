
struct s {
  long i;
  long j;
  long k;
};

struct s* fn1(struct s* p5) {
  p5->k;
  goto w;
}

struct s* fn2() {
  struct s q;
  struct s* r;
  for (;;) {
    r = &q;
    q = *r;
  }
}

int main() {}
