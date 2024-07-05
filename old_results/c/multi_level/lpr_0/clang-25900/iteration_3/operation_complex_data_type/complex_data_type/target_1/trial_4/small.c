int r;

int fn1(int p2) {
  return p2;
}

struct m {
  int n;
  int o;
};

int fn4() {
  struct m ad;
  int ae;

  ad.n = 1957;
  ad.o = fn1(5);

  ae = ad.o;
  ad.o = 0;
  r = r % (5 / ae);

  return ad.o;
}

int main() {
  fn4();
}