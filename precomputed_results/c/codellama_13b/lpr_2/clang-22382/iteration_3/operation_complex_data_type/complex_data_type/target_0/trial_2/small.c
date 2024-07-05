
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  int k;
  long j;
  int i;
  k = p.k;
w:;
  goto w;
}

unsigned fn2() {
  int k;
  long j;
  int i;
  struct h p;
  struct h r;
  p = r = p;
  while (1) {
    k = p.k;
    j = p.j;
    i = p.i;
    p = r = p;
  }
}

int main() {}
