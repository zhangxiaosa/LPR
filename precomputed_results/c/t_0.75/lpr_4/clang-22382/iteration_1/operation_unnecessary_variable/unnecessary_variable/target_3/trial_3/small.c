struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, unsigned p3, struct h p5) {}

unsigned fn2() {
  struct h p;
  int q;
  p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}