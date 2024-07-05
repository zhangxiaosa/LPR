struct h {
  int i;
  long j;
  unsigned k;
};

static void fn1(void p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  void p;
  fn1(p);
  for (;;) {
    void r1;
    p = r1 = p;
  }
}

int main() {}
