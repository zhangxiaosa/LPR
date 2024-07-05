
struct h fn1(f p1, a p2, g p3, d p4,
                  struct h p5) {
  p5.k;
w:;
  goto w;
}

optimized fn1:
int fn1(f p1, a p2, g p3, d p4,
                  struct h p5) {
  p5.k;
  return p5;
}
