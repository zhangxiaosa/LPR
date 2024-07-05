struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2() {
  struct h p;
  p.k;
w:
  goto w;
}