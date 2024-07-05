
struct s {
  long i;
  long j;
  long k;
};

static struct s fn1(long p1, struct s p5) {
  p5.k;
w:;
  goto w;
}

long fn2() {
  long q_i;
  long q_j;
  long q_k;

  q_i = 0;
  q_j = 0;
  q_k = 0;

  struct s r = { q_i, q_j, q_k };

  for (;;) {
    q_i = r.i;
    q_j = r.j;
    q_k = r.k;

    r = { q_i, q_j, q_k };
  }
}

int main() {}
