typedef signed a;
typedef short b;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct k {
  f l;
};

struct m {
  signed n : 18;
  signed o : 1;
};

a p;
struct k q;
c r;
static a s = -5L;
g t;
c u;
g v;

int main() {
  struct m z;
  // Inlined fn3(p) start
  struct m ad = {1957};
  ad.o = 5;
  r = t % (~s / 5);
  ad.o;
  // Inlined fn3(p) end
}