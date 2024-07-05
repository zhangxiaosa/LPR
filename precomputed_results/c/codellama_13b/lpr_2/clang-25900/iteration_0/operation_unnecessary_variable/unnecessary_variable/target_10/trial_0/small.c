
int fn1(unsigned p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
unsigned v;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  int ae = ad.o;
  ad.o = u;
  r = 5 / ae;
  ad.o = u;
}
