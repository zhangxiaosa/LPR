
int fn1(unsigned p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r; // <-- This variable is not used, so it can be optimized out
static int s = -5;
unsigned t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  int ae = ad.o;
  ad.o = u;
  // r = t % (5 / ae);  <-- This line can be optimized out since r is not used
  ad.o = u;
}
