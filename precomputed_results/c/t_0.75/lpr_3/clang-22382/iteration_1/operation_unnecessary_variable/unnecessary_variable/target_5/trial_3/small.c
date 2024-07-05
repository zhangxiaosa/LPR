struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1) {
  goto w;
  w:
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
