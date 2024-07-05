int r;

unsigned fn1(p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = 5;
  r = r % (5 / ad.o);
  return ad.o;
}