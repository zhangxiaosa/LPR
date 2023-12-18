typedef unsigned g;

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
g t;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  int ae = ad.o;
  ad.o = 0;
  r = t % (~s / ae);
  ad.o;
}
