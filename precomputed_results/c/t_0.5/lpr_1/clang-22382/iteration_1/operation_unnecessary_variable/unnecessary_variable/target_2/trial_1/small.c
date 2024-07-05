struct h {
  int i;
  long j;
};

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
