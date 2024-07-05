
struct s {
  long i;
  long j;
  long k;
};

long fn1(long p1, long p2, long p3) {
  p3;
w:;
  goto w;
}

long fn2() {
  long q;
  fn1(0, 0, q);
  for (;;) {
    long r = q;
    q = r;
  }
}

int main() {}
