unsigned fn1(unsigned p2) { return p2; }

struct m {
  signed int n;
  signed int o;
};

unsigned int r;
static signed int s = -5L;
unsigned int t;

int main() {
  struct m ad;
  ad.n = 1957;
  ad.o = fn1(5);

  signed int ae;
  ae = ad.o;

  r = t % (~s / ae);

  ad.o;
}
