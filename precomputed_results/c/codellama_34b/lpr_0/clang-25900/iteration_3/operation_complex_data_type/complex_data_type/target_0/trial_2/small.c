
int g(int p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
int t;

int main() {
  struct m ad = {1957};
  ad.o = g(5, 5);
  r = t % (17 / ad.o);
}
