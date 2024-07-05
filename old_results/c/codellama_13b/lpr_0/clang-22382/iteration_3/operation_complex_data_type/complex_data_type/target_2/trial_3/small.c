
struct S {
  long i;
  long j;
  long k;
};

struct S*** fn1(struct S*** p5) {
  p5->k;
w:
  goto w;
}

long fn2() {
  struct S** q;
  fn1(q);
  for (;;) {
    struct S* r = q;
    q = r;
  }
}

int main() {}
