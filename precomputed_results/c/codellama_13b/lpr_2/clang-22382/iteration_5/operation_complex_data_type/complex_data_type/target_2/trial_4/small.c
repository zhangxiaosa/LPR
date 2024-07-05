
struct h {
  long l;
  int i;
  long k;
};

struct h fn1(struct h p) {
  while (1) {
    p.l;
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p.l = r.l;
    p.i = r.i;
    p.k = r.k;
  }
}

int main() {}
