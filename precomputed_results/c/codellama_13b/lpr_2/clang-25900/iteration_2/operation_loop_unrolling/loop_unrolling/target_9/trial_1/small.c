
int fn1(int p1, int p2) { return p2; }

int r;

struct m {
  int n : 18;
  bool b : 1;
};

int main() {
  struct m ad = {1957};
  ad.b = fn1(5, 1);

  int ae = ad.b;
  ad.b = 1;

  r = 5 % (5 / ae);

  ad.b;
}
