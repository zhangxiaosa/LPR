
int g(int p1, int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
int t;

int main() {
  struct m ad = {1957};
  int ae_n = 5;
  int ae_o = 5;
  ad.o = g(ae_n, ae_o);
  ae_o = ad.o;
  ad.o = 5;
  r = t % (17 / ae_o);
  ad.o;
}
