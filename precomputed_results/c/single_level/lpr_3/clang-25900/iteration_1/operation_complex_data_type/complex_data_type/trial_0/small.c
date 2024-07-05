int fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

int main() {
  struct m ad;
  ad.n = 1957;

  unsigned ad_n = ad.n;
  signed ad_o;

  signed p2 = 5;
  int fn1_p2 = p2;

  ad_o = fn1(v, fn1_p2);

  signed ae;
  int af = t;

  ae = ad_o;
  signed u_signed = u;
  ad_o = u_signed;

  signed s_signed = s;
  signed s_negated = ~s_signed;
  signed ae_nonzero = ae;
  int r = af % (s_negated / ae_nonzero);

  unsigned ad_o_unused = ad_o;

  return 0;
}