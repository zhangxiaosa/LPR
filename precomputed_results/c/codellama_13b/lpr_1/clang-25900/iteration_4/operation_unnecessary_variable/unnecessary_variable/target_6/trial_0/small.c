
int fn1(p2) { return p2; }

int r;
static int s = -5;
int t_high;
struct m {
  int n : 18;
};
int fn3() {
  struct m ad = {1957};
  ad.n = fn1(5);
  int ae = ad.n;
  ad.n = 0;
  r = t_high % (~s / ae);
}
int main() { fn3(); }
