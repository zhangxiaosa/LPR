unsigned fn1(int p2) { return p2; }

signed int n;
signed int o;

unsigned r;
static signed s = -5L;
unsigned t;

int main() {
  struct {
    signed int n;
    signed int o;
  } ad;

  ad.n = 1957;
  ad.o = fn1(5);

  signed int ae;

  ae = ad.o;
  ad.o = ad.o;

  r = t % (~s / ae);

  ad.o;
}