unsigned fn1(int p2) { return p2; }

struct m { signed n : 18; signed o : 1; };

int r;
static signed s = -5L;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = 0;
  r = 0;
  ad.o;
}