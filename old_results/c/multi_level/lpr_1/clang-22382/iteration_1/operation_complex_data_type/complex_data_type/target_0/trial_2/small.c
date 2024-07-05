struct h {
  int i;
  long j;
  int k;
};

static int fn1_i;
static long fn1_j;
static int fn1_k;

static struct h fn1(struct h p5) {
  return p5;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
