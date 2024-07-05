
struct m {
  int n : 18;
};
int r;
static int s = -5L;
int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.n = p1;
  int r_tmp = p1 % (~s / p1);
  r = r_tmp;
  return ad.n;
}
int main() { fn4_inlined(5); }
