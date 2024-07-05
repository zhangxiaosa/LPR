typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed int s = -5L;
unsigned int t;
int u;
unsigned int v;

d fn4() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  signed int ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}

int main() {
  fn4();
}