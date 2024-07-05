unsigned fn1(unsigned p1, int p2) { return p2; }

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  struct m {
    signed n : 18;
    signed o : 1;
  };

  struct m ad;
  ad.n = 1957;

  unsigned ad_o = fn1(t, 5);
  signed ae;
  unsigned af = t;
  ae = ad_o;
  ad_o = u;
  r = af % (~s / ae);
  ad_o;
}