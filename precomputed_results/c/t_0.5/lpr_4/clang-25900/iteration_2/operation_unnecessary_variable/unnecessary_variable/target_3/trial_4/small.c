int fn1(int p1, int p2) {
  return p2;
}

int r;
static int s = -5L;

int main() {
  struct m {
    int n : 18;
    int o : 1;
  };
  struct m ad = {1957};
  ad.o = fn1(5, 5);
  int ae;
  ae = ad.o;
  ad.o = 5;
  r = (~s / ae);
  ad.o;
}