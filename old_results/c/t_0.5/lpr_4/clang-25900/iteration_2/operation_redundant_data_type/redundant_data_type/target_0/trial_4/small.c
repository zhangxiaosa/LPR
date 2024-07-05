signed fn1(signed p1, signed p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};
signed r;
static signed s = -5L;
signed t;

signed main() {
  struct m ad = {1957};
  ad.o = fn1(5, 5);
  signed ae;
  ae = ad.o;
  ad.o = 5;
  r = t % (~s / ae);
  ad.o;
  return 0;
}