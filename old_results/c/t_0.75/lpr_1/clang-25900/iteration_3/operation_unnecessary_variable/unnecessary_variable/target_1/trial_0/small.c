unsigned fn1(unsigned p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
unsigned t;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  ad.o = 0;
  r = t % (4 / ad.o);
  ad.o;
}