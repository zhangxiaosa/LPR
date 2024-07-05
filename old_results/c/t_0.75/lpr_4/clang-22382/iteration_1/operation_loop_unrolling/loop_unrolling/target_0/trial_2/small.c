struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3, p);

  struct h r;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;

  // Rest of the code...
}

struct h fn1(unsigned p1, unsigned p3, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
