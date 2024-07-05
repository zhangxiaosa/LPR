
struct h {
  int i;
  int j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.j;
  for (;;)
    ;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
