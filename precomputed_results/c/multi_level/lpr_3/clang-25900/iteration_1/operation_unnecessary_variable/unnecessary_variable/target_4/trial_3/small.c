unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = 5;
  int r;
  signed s = -5L;
  int t;
  int u;
  r = t % (~s / 5);
}