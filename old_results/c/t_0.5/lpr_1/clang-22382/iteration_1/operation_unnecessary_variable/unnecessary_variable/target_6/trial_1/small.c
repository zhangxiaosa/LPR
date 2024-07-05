struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2() {
  struct h p;
  fn1();
  for (;;) {
    struct h r;
    p = r = p;
  }
}

static struct h fn1() {
w:;
  goto w;
}

int main() {}
