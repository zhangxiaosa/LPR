struct h {
  int i;
  int k;
};

static struct h fn1();

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1) {
w:;
  goto w;
}

int main() {}
