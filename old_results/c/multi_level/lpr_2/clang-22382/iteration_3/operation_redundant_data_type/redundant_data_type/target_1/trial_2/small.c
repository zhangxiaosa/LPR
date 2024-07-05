static long fn1(long p5) {
  w:
  goto w;
}

long fn2() {
  long p;
  fn1((long)p);
  for (;;) {
    long r1;
    p = r1 = p;
  }
}