
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p4, struct h p5) {
  p5.j;
w:;
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(3, p);
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
