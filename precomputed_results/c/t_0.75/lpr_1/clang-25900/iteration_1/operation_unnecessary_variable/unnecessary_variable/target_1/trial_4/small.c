typedef unsigned e;

e fn1(p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  ad.o = u; // Replace u with ad.o
  r = t % (~s / ad.o);
  ad.o;
}