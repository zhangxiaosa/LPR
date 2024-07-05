int fn1(int p1, int p2) {
  return p2;
}

static int s = -5L;

int main() {
  struct m {
    int n : 18;
    int o : 1;
  };

  struct m ad = {1957};
  ad.o = fn1(5, 5);
  int ae = ad.o;
  ad.o = 5;
  
  int r = t % (~s / ae);
  ad.o;
}