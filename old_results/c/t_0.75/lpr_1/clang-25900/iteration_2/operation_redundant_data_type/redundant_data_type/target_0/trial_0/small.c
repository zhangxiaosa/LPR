typedef unsigned unsigned;

unsigned fn1(p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

unsigned r;
static signed s = -5L;
unsigned t;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  unsigned ae;
  ae = ad.o;
  ad.o = 0;
  r = t % (~s / ae);
}