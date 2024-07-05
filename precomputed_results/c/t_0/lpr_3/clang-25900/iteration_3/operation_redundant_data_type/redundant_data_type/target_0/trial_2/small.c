typedef unsigned e;
e fn1(p2) { return p2; }
struct m {
  signed n : 18;
  signed o : 1;
};
int r;
static signed s = -5L;
unsigned t;
long fn4() {
  struct m ad = {1957L};
  ad.o = (unsigned)fn1(5);
  unsigned ae;
  ae = (unsigned)ad.o;
  ad.o = 0;
  r = t % (~(signed)s / ae);
}
int main(void) { fn4(); }
