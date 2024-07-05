
int fn1(int p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s_high = -5;

int main() {
  struct m ad = {1957};
  int u;

  ad.o = fn1(5, 5);
  u = ad.o;
  ad.o = u;
  r = u % (~s_high / u);
}
