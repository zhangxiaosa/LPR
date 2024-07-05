unsigned p1;
int p2;
unsigned return_value;

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s;
unsigned t;
int u;

int main() {
  struct m ad;
  unsigned ad_n = 1957;
  unsigned ad_o;
  signed ae;
  unsigned af;

  p1 = t;
  p2 = 5;
  return_value = p2;

  ad.n = ad_n;
  ad.o = p2;
  ad_o = ad.o;
  ae = ad_o;
  ad.o = u;
  af = t;
  r = af % (~s / ae);
  ad.o;
}