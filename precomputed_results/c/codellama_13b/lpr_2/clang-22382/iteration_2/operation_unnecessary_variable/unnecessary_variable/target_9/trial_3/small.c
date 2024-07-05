
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  p.k;
w:;
  goto w;
}

unsigned fn2() {
  struct h r;
  r = fn1();
  for (;;) {
    r = fn1();
  }
}

int main() {}
