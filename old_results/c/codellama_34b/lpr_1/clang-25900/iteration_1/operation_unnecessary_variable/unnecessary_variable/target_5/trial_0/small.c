
typedef unsigned uint;
uint fn1(uint p1) { return 0; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5;
int u;
int fn4() {
  struct m ad = {1957};
  ad.o = fn1(0);
  int ae;
  int af = u;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}
int main() { fn4(); }
