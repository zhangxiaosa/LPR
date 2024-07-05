struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct h p;
  p.k;
  goto w;
w:
  goto w;
}
