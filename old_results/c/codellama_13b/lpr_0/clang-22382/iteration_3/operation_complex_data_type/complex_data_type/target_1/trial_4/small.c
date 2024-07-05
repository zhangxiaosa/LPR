
struct s_q {
  long i;
  long j;
  long k;
} q;

struct s_r {
  long i;
  long j;
  long k;
} r;

struct s fn1(struct s_q p5) {
  p5.k;
w:;
  goto w;
}

long fn2() {
  q = r;
  for (;;) {
    q = r;
  }
}

int main() {}
