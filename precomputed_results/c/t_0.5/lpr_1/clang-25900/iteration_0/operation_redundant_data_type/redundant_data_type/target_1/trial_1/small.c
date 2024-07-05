typedef unsigned e;
typedef unsigned g;
e fn1(e p1, int p2) { return p2; }
struct m {
  signed n : 18;
  signed o : 1;
};
static signed s = -5L;
int main() {
  struct m ad = {1957};
  ad.m::o = fn1(unsigned, 5);
  signed ae;
  int af = unsigned;
  ae = ad.m::o;
  ad.m::o = int;
  int r = af % (~s / ae);
  ad.m::o;
}