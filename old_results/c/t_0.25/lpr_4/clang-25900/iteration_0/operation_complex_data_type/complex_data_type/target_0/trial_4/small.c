typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

c r;
static signed s = -5L;
g t;
c u;
g v;

d fn4() {
  signed ad_n = 1957;
  signed ad_o;
  e ad_o_fn1_result;
  signed ae;
  c af;
  signed ad_o_value;
  c af_mod_result;

  ad_o_fn1_result = fn1(v, 5);
  ad_o = ad_o_fn1_result;
  ae = ad_o;
  ad_o_value = u;
  af = t;
  af_mod_result = af % (~s / ae);
  r = af_mod_result;
}

int main() {
  fn4();
}