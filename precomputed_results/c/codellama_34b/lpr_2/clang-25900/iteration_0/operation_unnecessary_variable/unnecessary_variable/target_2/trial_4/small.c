
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5L;
int t_n;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae = 5; // The value of p1 is known at compile-time, so we can propagate it into the expression.
  int af = t_n;
  ad.o = u;
  r = af % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }
