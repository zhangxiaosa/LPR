int r;
static int s = -5L;
unsigned t;
int u;
unsigned fn1(p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int fn4() {
  struct m ad = {1957};
  ad.o = fn1(5);
  ad.o = u; // Assuming u is not modified between its declaration and this assignment
  r = t % (4 / ad.o); // Propagating the value of ad.o
  return ad.o;
}
int main() { fn4(); }
