unsigned fn1(p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned r;

int main() {
  struct m ad = {1957, fn1(5)};
  signed ae;
  ae = ad.o;
  ad.o = ad.o;
  r = 4 % (4L / ad.o);
  ad.o;
}