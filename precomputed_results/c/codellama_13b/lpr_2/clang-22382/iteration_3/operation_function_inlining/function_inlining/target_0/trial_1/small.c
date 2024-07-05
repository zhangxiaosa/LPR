
struct h {
  int i;
  long j;
  int k;
};

static inline struct h fn1(struct h p) {
  p.k;
  goto w;
w:;
}

unsigned fn2() {
  struct h p;
  struct h r;
  p = r = p;
}

int main() {}
