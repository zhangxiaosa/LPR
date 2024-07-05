
struct h {
  int i;
  long j;
  int k;
};

static void fn1(unsigned p1, int p2, struct h p3) {
  p3.k;
w:;
  goto w;
}

unsigned fn2(unsigned p1) {
  struct h p;
  fn1(3, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
