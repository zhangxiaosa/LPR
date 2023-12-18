int fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed o : 1;
};

int r;
unsigned t;
int u;

long fn4() {
  struct m ad = {1957};
  ad.o = fn1(5, 5);
  signed ae = ad.o;
  ad.o = u;
  r = t % (4 / ae);
  ad.o;
}

int main() {
  fn4();
}