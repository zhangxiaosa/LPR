struct h {
  int i;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  goto w;
}

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
