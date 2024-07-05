
// Constant propagation
struct m {
  int o : 1;
};
int r;
static int s = -5L;

// Copy propagation
int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae = ad.o;
  ad.o = 0;
  int r_tmp = ae % (~s / ae);
  r = r_tmp;
  return ad.o;
}

int main() { fn4_inlined(5); }
