unsigned fn1(p2) { return p2; }

unsigned r;
unsigned t;

unsigned main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};
  ad.o = unsigned(fn1(5));
  unsigned ae = unsigned(ad.o);
  ad.o = 0;
  r = unsigned(t) % (5 / ae);
}