
struct h {
  int k;
};

static struct h fn1(struct h p) {
  while (1)
    p.k;
}

unsigned fn2() {
  while (1) ;
}
