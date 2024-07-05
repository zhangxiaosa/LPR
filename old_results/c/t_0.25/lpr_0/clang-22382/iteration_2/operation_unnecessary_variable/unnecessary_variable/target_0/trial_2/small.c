struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  goto w;
}

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r1 = p;
    p = r1;
  }
}

int main() {}
