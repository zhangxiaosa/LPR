
struct h {
  int i;
  long j;
  int k;
};

struct h fn1(struct h p) {
  int i = p.i;
  long j = p.j;
  int k = p.k;
  goto w;
}

unsigned fn2() {
  struct h p;
  struct h r;
  p = r;
  while (1) {
    p = r;
  }
}

int main() {}
