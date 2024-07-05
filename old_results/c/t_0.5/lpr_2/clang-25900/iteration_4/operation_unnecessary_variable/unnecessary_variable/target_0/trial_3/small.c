unsigned fn1(p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned r;
static signed s = -5L;

int main() {
  struct m ad = {1957};
  signed ae;
  ae = ad.o;
  r = 4 % (~s / ae);
}