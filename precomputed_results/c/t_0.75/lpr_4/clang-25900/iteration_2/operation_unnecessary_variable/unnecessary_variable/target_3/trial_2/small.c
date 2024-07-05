unsigned fn1(p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  signed ae;
  ae = ad.o;
  ad.o = 5;
  r = 5 / ae;
  ad.o;
}
