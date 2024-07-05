unsigned fn1(unsigned p1, int p2) { return p2; }

int r;
static int s = -5L;
unsigned t;
struct m {
  int n : 18;
  int o : 1;
};
int main() {
  struct m ad = {1957};
  ad.o = fn1(0, 5);
  ad.o;
  r = t % (~s / ad.o);
}