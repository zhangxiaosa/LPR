
int fn1(int p2) {
  return p2;
}

struct m {
  unsigned int n : 18;
  unsigned int o : 1;
};

unsigned int r;
unsigned int t;
unsigned int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  u = ad.o;
  ad.o = u;
  r = t % (5 / u);
  ad.o;
}
