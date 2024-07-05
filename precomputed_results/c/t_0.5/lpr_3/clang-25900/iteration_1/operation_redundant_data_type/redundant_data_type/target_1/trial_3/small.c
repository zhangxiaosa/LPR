typedef unsigned g;
unsigned fn1(unsigned p1, int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
unsigned r;
unsigned t;
int main() {
  struct m ad = {1957};
  ad.o = fn1(0, 5);
  ad.o = 0;
  r = t % (5 / ad.o);
}