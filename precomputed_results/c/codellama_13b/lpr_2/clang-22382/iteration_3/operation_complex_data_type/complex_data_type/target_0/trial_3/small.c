c
struct h {
  int i;
  long j;
  int k;
};

struct h fn1(struct h p) {
  int k = p.k;
  while (1) {
    goto w;
    w:;
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
