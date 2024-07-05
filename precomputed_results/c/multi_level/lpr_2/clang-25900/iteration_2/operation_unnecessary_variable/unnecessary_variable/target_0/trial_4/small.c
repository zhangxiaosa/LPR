int fn1(unsigned p1, int p2) {
  return p2;
}

struct m {
  signed n: 18;
  signed o: 1;
};

int r;
unsigned t;
int u;
unsigned v;

long fn4() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  signed ae;
  ae = ad.o;
  r = t % (4 / ae);
  // ad.o; (removed since it's unused)
}

int main() {
  fn4();
}