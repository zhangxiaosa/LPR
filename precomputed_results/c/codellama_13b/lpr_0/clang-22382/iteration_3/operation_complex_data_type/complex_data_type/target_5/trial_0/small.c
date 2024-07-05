
struct s {
  long i;
  long j;
  long k;
};

long fn1(long i, long j, long k) {
  k;
w:;
  goto w;
}

long fn2(long i, long j, long k) {
  struct s q;
  fn1(q);
  for (;;) {
    struct s r = q;
    q = r;
  }
}

int main() {
  struct s s1;
  fn2(s1.i, s1.j, s1.k);
}
