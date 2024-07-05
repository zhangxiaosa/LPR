
int fn1(int p1, int p2) { return p2; }
int r;
struct m {
  int n : 18;
  int o : 1;
};
int main() {
  struct m ad = {1957};
  ad.o = 5;
  int ae = ad.o;
  ad.o = 5;
  r = 5 % (5 / ae);
  ad.o;
}
