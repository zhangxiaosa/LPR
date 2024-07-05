unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

long fn4() {
  struct m ad = {1957};
  int ad_n = ad.n;
  int ad_o = ad.o;

  ad_o = fn1(v, 5);
  int ae;
  ae = ad_o;
  ad_o = u;
  r = t % (~s / ae);
  ad_o;
}

int main() { fn4(); }
