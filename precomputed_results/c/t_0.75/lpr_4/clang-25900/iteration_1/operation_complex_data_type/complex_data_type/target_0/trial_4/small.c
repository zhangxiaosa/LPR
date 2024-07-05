unsigned fn1(unsigned p1, int p2) { return p2; }
struct m {
  signed n : 18;
  signed o : 1;
};
int r;
static signed s = -5L;
unsigned t;
int main() {
  struct m ad = {1957};
  signed ad_n = ad.n;
  signed ad_o = ad.o;
  ad_o = fn1(5, 5);
  signed ae;
  ae = ad_o;
  ad_o = 5;
  r = t % (~s / ae);
  ad_o;
}