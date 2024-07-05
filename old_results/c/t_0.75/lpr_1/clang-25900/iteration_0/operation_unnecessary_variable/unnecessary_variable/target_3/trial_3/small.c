typedef unsigned e;

e fn1(int p2) {
  return 5; // Optimized: replaced p2 with constant 5
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = 5; // Optimized: replaced fn1(5) with constant 5
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  // ad.o; // Removed: ad.o is not used anymore
}