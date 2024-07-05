
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  int k = p.k;
  while (1) {
    goto w;
  }
  w:;
}

unsigned fn2() {
  struct h p;
  struct h r;
  while (1) {
    int i = p.i;
    long j = p.j;
    int k = p.k;
    r.i = i;
    r.j = j;
    r.k = k;
    p = r;
  }
}

int main() {}
