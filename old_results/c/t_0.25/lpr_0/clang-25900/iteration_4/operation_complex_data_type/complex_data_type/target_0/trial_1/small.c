unsigned int fn1(unsigned int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed int s = -5L;
unsigned int t;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  int ae_temp = ae;
  ad.o = u;
  r = t % (~s / ae_temp);
  ad.o;
}