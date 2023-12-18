struct {
  int i;
  long j;
  unsigned k;
} p;

unsigned fn2() {
  p.k;
w:
  goto w;
}