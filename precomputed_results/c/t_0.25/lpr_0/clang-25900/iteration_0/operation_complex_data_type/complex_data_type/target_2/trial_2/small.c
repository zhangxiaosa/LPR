typedef signed int a;
typedef int c;
typedef long int d;
typedef unsigned int e;
typedef unsigned int g;

e fn1(e p1, int p2) { return p2; }

struct m {
  signed int n : 18;
  signed int o : 1;
};

static a s = -5L;

d fn4() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  a ae;
  ae = ad.o;
  r = t % (~s / ae);
}

int main() { fn4(); }
