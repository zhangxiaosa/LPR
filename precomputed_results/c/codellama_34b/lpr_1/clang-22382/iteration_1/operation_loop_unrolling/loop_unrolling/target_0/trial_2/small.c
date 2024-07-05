
struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  p5.k;
  goto w;
}

long fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
    struct h s;
    s = r = p;
    struct h t;
    t = r = p;
    struct h u;
    u = r = p;
    struct h v;
    v = r = p;
    struct h w;
    w = r = p;
    struct h x;
    x = r = p;
    struct h y;
    y = r = p;
    struct h z;
    z = r = p;
  }
}

int main() {}
