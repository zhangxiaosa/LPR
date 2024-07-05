
struct h {
  int i;
  long j;
  int k;
};

static void fn1(struct h* p5) {
  p5->j;
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(&p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
