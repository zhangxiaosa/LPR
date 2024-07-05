unsigned fn1(p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned r;
static signed s = -5L;
int main() {
  struct m ad;
  unsigned ad_n = 1957;
  unsigned ad_o = fn1(5);
  ad.n = ad_n;
  ad.o = ad_o;

  signed ae;
  ae = ad.o;
  ad.o = ad.o;

  r = 4 % (~s / ae);

  unsigned ad_o_result = ad.o;
}
