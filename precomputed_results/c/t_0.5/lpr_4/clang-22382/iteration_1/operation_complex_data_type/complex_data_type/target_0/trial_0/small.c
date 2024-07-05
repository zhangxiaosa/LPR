struct h {
  int i;
  long j;
  int k;
};

unsigned int l;
int p5_i;

static void fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
                struct h p5) {
  p5_i = p5.i;
w:
  goto w;
}

unsigned int fn2(unsigned int p1) {
  struct h p;
  struct h r;
  fn1(0, (short)l, p1, 3, p);
  for (;;) {
    p = r = p;
  }
}

int main() {
  return 0;
}