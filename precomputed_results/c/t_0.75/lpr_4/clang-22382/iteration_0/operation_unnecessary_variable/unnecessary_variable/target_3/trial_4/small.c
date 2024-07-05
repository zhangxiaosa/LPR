unsigned l;

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned, unsigned, struct h);

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, unsigned p3, struct h p5) {
  // Removed unused parameter p4

  // Removed unused statement
w:
  goto w;
}

int main() {}