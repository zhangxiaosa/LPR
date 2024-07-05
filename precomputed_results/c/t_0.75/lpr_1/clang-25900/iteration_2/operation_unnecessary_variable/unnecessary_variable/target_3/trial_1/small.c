unsigned fn1(p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

static signed s = -5;
int main() {
  struct m ad = {1957};
  ad.o = 5;
  signed ae;
  ae = ad.o;
  ad.o = 0;
  ad.o;
}