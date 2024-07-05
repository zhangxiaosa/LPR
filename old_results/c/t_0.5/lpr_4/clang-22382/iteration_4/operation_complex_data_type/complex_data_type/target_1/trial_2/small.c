struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  int p5_i = p5.i;
  while (1) {}
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {}
}

int main() {}
