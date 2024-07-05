
int fn1(int p1, int p2) { return p2; }

int r;

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct m ad = {1957};

  // Optimized loop unrolling
  int ae = ad.o;
  ad.o = 5;
  int ae2 = ad.o;
  ad.o = 5;
  int ae3 = ad.o;
  ad.o = 5;
  int ae4 = ad.o;
  ad.o = 5;

  r = 5 % (5 / ae);

  ad.o;
}
