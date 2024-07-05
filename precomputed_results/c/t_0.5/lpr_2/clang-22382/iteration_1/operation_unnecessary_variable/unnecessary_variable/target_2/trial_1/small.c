struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2() {
  struct h p;
  for (;;) {
    p = p;
  }
}

struct h fn1(struct h p5) {
w:
  goto w;
}

int main() {}
