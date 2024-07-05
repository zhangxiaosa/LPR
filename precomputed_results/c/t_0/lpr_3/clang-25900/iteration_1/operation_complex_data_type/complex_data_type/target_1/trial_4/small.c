typedef long d;
typedef unsigned e;

e fn1(unsigned p2) {
  return p2;
}

struct m {
  signed int n;
  signed int o;
};

int r;
static signed int s = -5L;
unsigned int t;
int u;

d fn4() {
  struct m ad = {1957, 0};
  ad.o = fn1(5);
  signed int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() {
  fn4();
}