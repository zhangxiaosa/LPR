unsigned fn1(p2) { return p2; }

struct m {
  int o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  struct m ad;
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}