
typedef unsigned uint;
uint fn1(int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5;
int u;
int fn4() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int af = u;
  ad.o = u;
  r = af % (~s / ad.o);
}
int main() {
  fn4();
  return 0;
}
