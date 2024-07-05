struct h {
  long j;
};

unsigned l;
static void fn1() {
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1();
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
