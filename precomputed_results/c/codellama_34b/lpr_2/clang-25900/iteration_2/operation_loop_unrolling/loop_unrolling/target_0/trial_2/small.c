
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5L;
int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  ae = ad.o;
  ad.o = 0;
  r = ae % (~s / ae);
  return ad.o;
}
int main() { fn4_inlined(5); }

// Optimized loop
int main() {
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      fn4_inlined(i+j);
    }
  }
}
