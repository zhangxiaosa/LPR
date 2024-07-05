struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned, struct h);
unsigned fn2(p1) {
  struct h p;
  int q = 0; // Initialize q to a default value
  fn1(q, p);
  for (;;) {
    struct h r;
    p = p;
  }
}

struct h fn1(unsigned p1, struct h p5) {
  goto w;
w:
  goto w;
}

int main() {}
