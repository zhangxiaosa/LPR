
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  p5.j;
w:;
  goto w;
}

unsigned fn2() {
  struct h r;
  fn1(1, 1, 3, r);
  for (;;) {
    r = r;
  }
}

int main() {}
