int fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

long fn4() {
  struct m ad = {0};
  ad.o = fn1(v, 5);
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}

int main() { fn4(); }