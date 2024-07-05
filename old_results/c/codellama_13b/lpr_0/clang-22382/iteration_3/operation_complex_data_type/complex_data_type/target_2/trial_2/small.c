
struct s {
  long i;
  long j;
  long k;
};

struct s* fn1(struct s* p5) {
  p5->k;
  goto w;
}

long fn2() {
  struct s q;
  struct s* q_ptr = &q;
  fn1(q_ptr);
  for (;;) {
    struct s* r_ptr = q_ptr;
    q_ptr = r_ptr;
  }
}

int main() {}
