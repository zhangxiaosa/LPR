struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, unsigned p3, unsigned p4, struct h p5) {
  // Removed the unused p5.k access
w:
  goto w;
}

unsigned fn2(unsigned p1) {
  struct h p;
  fn1(p1, 3, p);
  
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
