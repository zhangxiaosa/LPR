struct h {
  int i;
  long j;
};

static struct h fn1(unsigned p1, struct h p6) {
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
