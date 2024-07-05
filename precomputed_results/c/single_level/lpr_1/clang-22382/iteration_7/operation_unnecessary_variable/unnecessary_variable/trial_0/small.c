struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static void fn1(unsigned, short, unsigned);

unsigned fn2(p1) {
  struct h p;
  fn1(l, p1, 3);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

void fn1(unsigned p1, short p2, unsigned p3) {
  goto w;
// removed p5.k;
w:
  goto w;
}

int main() {}
