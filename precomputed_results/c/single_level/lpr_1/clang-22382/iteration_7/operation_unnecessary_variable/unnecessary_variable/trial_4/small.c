struct h {
  signed i;
  long j;
  unsigned k;
};

static void fn1(unsigned, short, unsigned, struct h);

unsigned fn2(p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

void fn1(unsigned p1, short p2, unsigned p3, struct h p5) {
  goto w;
}

int main() {}
