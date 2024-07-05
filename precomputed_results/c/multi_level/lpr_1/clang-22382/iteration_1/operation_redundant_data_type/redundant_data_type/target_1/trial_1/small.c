static long fn1(long p5) {
  return p5;
}

unsigned fn2() {
  long p;
  fn1(p);
  for (;;) {
    long r;
    p = r = p;
  }
}

int main() {
  return 0;
}