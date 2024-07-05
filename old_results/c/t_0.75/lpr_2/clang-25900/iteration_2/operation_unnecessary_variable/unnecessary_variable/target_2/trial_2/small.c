int r;
static int s = -5L;
unsigned t;
struct m {
  int n : 18;
  int o : 1;
};

int fn1(p2) {
  return 5;  // Optimization: Replace the function call with the constant value 5.
}

int main() {
  struct m ad = {1957};
  ad.o = 5;  // Optimization: Replace the function call with the constant value 5.
  int ae;
  ae = ad.o;
  ad.o = ad.o;
  r = t % (~s / ae);
  ad.o;
}