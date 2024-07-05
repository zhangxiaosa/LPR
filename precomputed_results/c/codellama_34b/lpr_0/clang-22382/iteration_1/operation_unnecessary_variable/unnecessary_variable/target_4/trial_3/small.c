
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.j = 5;
  for (;;)
    ;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    r = p;
  }
}

int main() {
  struct h p;
  p.i = 5;
  fn2(p);
}
