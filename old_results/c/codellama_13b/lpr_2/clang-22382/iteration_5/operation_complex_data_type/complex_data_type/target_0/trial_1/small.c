
struct h {
  long i;
  long j;
};

struct h_k {
  long k;
};

static struct h fn1(struct h p, struct h_k k) {
  while (1)
    k.k;
}

unsigned fn2() {
  struct h p;
  struct h_k k;
  fn1(p, k);
  while (1) {
    struct h r;
    p = r = p;
    k = r = k;
  }
}

int main() {}
