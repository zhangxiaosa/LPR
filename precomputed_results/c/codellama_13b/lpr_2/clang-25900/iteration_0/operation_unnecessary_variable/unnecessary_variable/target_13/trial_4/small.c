
int fn1(unsigned p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  int ae = ad.o;
  ad.o = ad.o;
  r = ad.o % (5 / ae);
}
