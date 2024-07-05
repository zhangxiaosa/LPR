
struct s {
  long i;
  long j;
  unsigned k;
};

static struct s* fn1(unsigned* p1, unsigned* p3, struct s* p5) {
  p5->k;
w:;
  goto w;
}

unsigned fn2(unsigned p1) {
  struct s q;
  fn1(0, &p1, &q);
  for (;;) {
    struct s* r = &q;
    q = *r;
  }
}

int main() {
  struct s* array;
  for (int i = 0; i < n; i++) {
    array[i] = fn2(i);
  }
}
