typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

struct m {
  signed n : 18;
  signed o : 1;
};

c r;
static signed s = -5L;
g t;

d fn4() {
  struct m ad = {1957};
  ad.o = 5;
  r = t % (~s / ad.o);
}

int main() {
  fn4();
}