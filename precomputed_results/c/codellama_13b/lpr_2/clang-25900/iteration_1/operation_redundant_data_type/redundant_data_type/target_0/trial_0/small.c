
int fn1(unsigned p1, int p2) { return p2; }

struct m {
  unsigned n : 18;
  unsigned o : 1;
};

unsigned r;
unsigned u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(u, 5);
  unsigned ae = ad.o;
  ad.o = u;
  r = u % (5 / ae);
  ad.o;
}
