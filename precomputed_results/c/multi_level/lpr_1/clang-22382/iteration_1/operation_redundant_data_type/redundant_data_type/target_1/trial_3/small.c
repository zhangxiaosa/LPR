static long fn1(long p5) {
  goto w;
w:
  goto w;
}

unsigned fn2() {
  long p;
  fn1(p);
  for (;;) {
    long r;
    p = r = p;
  }
}

int main() {}
