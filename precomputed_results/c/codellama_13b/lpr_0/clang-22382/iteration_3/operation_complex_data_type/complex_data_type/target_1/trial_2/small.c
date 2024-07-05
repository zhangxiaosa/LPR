
struct my_struct {
  long i;
  long j;
  long k;
};

static struct my_struct fn1(struct my_struct p5) {
  p5.k;
w:;
  goto w;
}

long fn2() {
  struct my_struct q;
  fn1(q);
  for (;;) {
    struct my_struct r = q;
    q = r;
  }
}

int main() {
  struct my_struct q;
  fn2(q);
}
