unsigned fn1(unsigned p1, int p2) { return p2; }

struct {
  signed n : 18;
  signed o : 1;
} ad = {1957};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

long fn4() {
  ad.o = (unsigned)fn1(v, 5);
  signed ae;
  unsigned af = t;
  ae = (signed)ad.o;
  r = (unsigned)af % (~-5L / ae);
}

int main() {
  fn4();
}