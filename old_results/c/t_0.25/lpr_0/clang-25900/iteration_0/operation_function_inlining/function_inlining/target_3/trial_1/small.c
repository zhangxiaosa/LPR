typedef signed a;
typedef short b;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct m {
  signed n : 18;
  signed o : 1;
};

static a s = -5L;

d fn4() {
  struct m z;
  struct m ad = {1957};
  ad.o = 5;
  a ae;
  c af;
  ae = ad.o;
  ad.o = 0;
  r = af % (~s / ae);
}

int main() {
  fn4();
}