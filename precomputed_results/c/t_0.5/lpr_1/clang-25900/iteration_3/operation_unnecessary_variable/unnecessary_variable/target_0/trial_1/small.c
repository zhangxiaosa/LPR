unsigned fn1(p1) { return p1; }
int r;
static signed s = -5L;
unsigned t;
int u;
int main() {
  struct {
    signed o : 1;
  } ad = {};
  ad.o = fn1(5);
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}