unsigned fn1(unsigned p1, int p2) { return p2; }

int r;
static int s = -5L;
unsigned t;
unsigned v;
struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = fn1(0, 5); // Optimized: Replaced v with constant 0
  int ae;
  ae = ad.o;
  ad.o = ad.o;
  r = t % (~s / ae);
  ad.o;
}