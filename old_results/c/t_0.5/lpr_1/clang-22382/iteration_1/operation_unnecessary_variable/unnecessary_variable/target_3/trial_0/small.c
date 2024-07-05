struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2(p1) {
  struct h p;
  int q;
  for (;;) {
    struct h r;
    p = r;
  }
}

struct h fn1(unsigned p1, struct h p5) {
  goto w;
w:
  goto w;
}

int main() {}
