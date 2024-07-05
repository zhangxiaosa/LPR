typedef long d;

typedef unsigned e;

e fn1(e p2) {
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
  struct m ad;
  ad.n = 1957;
  ad.o = fn1(5);
  
  signed int ae = ad.o;
  ad.o = u;
  
  r = t % (~s / ae);
  
  // ad.o; // Removed, as it doesn't have any effect
  
  // Return a value of type d
  return (d)ad.n;
}

int main() {
  fn4();
}