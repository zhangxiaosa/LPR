unsigned fn1(p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned r;
static signed s = -5L;
int main() {
  struct m ad;
  unsigned ad_o_result;
  signed ae;

  ad.n = 1957;
  ad_o_result = fn1(5);
  ae = ad_o_result;
  ad.o = ad.o;
  r = 4 % (~s / ae);
  ad.o;
}