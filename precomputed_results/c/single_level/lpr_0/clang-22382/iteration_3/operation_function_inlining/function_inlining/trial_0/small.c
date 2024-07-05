struct hjson {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct hjson fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct hjson p5) {
  // Optimized out: p5.k;
}

unsigned fn2(p1) {
  struct hjson p;
  int q;
  struct hjson r1;
  for (;;)
    p = r1 = p;
}

int main() {}