unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
unsigned t;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(t, 5);
  signed ae;
  unsigned af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~0 / ae);
  ad.o;
}