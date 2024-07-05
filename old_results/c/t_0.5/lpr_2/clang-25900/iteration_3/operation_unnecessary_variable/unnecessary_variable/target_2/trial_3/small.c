unsigned fn1(p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned r;
static signed s = -5L;
unsigned t;

int main() {
  struct m ad = {1957, fn1(5)};
  signed ae;
  ae = ad.o;
  ad.o = ad.o;
  r = t % (4 / ad.o);
}