unsigned fn1(p2) { return p2; }

unsigned r;
unsigned t;

unsigned main() {
  struct {
    unsigned n : 18;
    unsigned o : 1;
  } ad = {1957};
  ad.o = fn1(5);
  unsigned ae;
  ae = ad.o;
  ad.o = 0;
  r = t % (5u / ae);
}