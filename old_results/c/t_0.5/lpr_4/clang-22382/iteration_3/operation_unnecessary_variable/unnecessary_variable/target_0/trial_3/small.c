static struct h fn1(unsigned p1, struct h p5) {
  goto w;
}

unsigned fn2() {
  struct h p;
  struct h r;
  fn1(0, p);
  for (;;) p = r = p;
}

int main() {}
