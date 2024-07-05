unsigned fn1(unsigned p1, int p2) { return p2; }

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  ad.o = fn1(5, 5);
  signed ae;
  ae = ad.o;
  r = t % (~s / ae);
}