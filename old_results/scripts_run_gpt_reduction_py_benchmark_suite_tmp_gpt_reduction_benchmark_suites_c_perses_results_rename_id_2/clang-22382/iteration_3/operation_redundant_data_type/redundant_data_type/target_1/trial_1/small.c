static long fn1(long p5) {
  p5;
w:
  goto w;
}

unsigned fn2() {
  long p;
  fn1(p);
  for (;;) {
    long r1;
    p = r1 = p;
  }
}

int main() {}
