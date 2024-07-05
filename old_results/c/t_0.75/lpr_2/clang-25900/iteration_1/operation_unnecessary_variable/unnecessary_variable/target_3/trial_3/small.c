int r;
static int s = -5L;
unsigned t;
struct m {
  int n : 18;
  int o : 1;
};

int fn1(int p2) { return p2; }

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  ad.o;
  r = t % (~s / ad.o);
  ad.o;
}
