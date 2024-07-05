
int fn1(int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

unsigned r;
unsigned t;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  u = ad.o;
  ad.o = u;
  r = r % (5 / u);
  ad.o;
}
