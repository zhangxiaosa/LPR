
struct h {
  int i;
  long j;
  int k;
};

int main() {
  struct h p;
  p.i = 1;
  p.j = 2;
  p.k = 3;
  fn1(p);
  printf("i: %d, j: %ld, k: %d\n", p.i, p.j, p.k);
}

static struct h fn1(struct h p5) {
  p5.j;
  for (int i = 1; i <= 3; i++) {
    p5.i += i;
    p5.j += i;
    p5.k += i;
  }
  return p5;
}

unsigned fn2() {
  struct h p;
  p.i = 1;
  p.j = 2;
  p.k = 3;
  fn1(p);
  printf("i: %d, j: %ld, k: %d\n", p.i, p.j, p.k);
}
