
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(struct s p5) {
  p5.k;
w:;
  goto w;
}

long fn2() {
  long q_i;
  long q_j;
  long q_k;
  struct s q = { q_i, q_j, q_k };
  fn1(q);
  for (;;) {
    struct s r = q;
    q_i = r.i;
    q_j = r.j;
    q_k = r.k;
  }
}

int main() {
}
