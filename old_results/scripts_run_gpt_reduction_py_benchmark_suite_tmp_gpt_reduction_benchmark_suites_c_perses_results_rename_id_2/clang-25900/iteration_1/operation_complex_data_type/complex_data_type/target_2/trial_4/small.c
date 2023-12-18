int fn1(unsigned int p1, int p2) { return p2; }

struct m {
  signed int n;
  unsigned int o;
};

int r;
static signed int s = -5L;
unsigned int t;
int u;
unsigned int v;

long int fn4() {
  struct m ad = {1957, 0};
  ad.o = fn1(v, 5);
  int ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}

int main() { fn4(); }
