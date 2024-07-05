struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p6) {
  p6.k;
w:
  goto w;
}

unsigned fn2() {
  for (;;) {
    struct h r;
  }
}

int main() {}
