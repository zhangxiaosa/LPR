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

struct h fn1() {
  goto w;
}

int main() {}
