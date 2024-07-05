
struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(struct h p) {
  p.i = p.j;
}

unsigned fn2() {
  struct h p;
  fn1(p);
}

int main() {}
