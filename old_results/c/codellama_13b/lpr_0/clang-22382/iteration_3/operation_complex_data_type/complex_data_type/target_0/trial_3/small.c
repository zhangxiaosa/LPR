
long fn1(long p5i, long p5j, long p5k) {
  long k = p5k;
w:
  goto w;
}

long fn2() {
  long qi, qj, qk;
  fn1(qi, qj, qk);
  for (;;) {
    long ri, rj, rk = qi, qj, qk;
    qi = ri, qj = rj, qk = rk;
  }
}

int main() {}
