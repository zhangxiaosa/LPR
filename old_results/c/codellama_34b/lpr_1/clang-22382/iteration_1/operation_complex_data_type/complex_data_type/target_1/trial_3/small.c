
int i;
long j;
unsigned k;

static struct h fn1(struct h p5) {
  i = p5.i;
  j = p5.j;
  k = p5.k;
  goto w;
}

long fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
