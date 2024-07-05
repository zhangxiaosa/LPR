typedef unsigned e;
typedef unsigned g;
unsigned fn1(unsigned p1, int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int main() {
  struct m ad = {1957};
  ad.o = fn1(unsigned, 5);
  int ae;
  int af = unsigned;
  ae = ad.o;
  ad.o = int;
  int r;
  r = af % (~int / ae);
}