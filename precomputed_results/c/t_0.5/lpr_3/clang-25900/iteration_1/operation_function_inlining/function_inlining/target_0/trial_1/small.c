typedef int c;
typedef unsigned e;
typedef unsigned g;
e fn1(e p1, int p2) {
  return p2;
}

struct m {
  signed n : 18;
  signed o : 1;
};

c r;
g t;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  r = t % (5 / ad.o);
}