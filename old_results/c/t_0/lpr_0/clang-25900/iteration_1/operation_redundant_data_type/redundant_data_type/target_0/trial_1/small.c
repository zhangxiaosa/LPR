typedef unsigned unsigned;

unsigned fn1(unsigned p1, int p2) { return p2; }
struct {
  int n : 18;
  int o : 1;
} ad;
unsigned r;
static signed s = -5L;
unsigned t;
unsigned u;
unsigned v;
unsigned fn4() {
  ad = {1957};
  ad.o = fn1(v, 5);
  unsigned ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}

int main() { fn4(); }
