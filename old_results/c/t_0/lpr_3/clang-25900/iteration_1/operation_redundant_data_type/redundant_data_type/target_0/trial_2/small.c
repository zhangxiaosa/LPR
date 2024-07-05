typedef long d;

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned int t;
int u;

void fn4() {
  struct m ad = {1957};
  ad.o = 5;
  signed ae;
  unsigned int af = t;
  ae = ad.o;
  ad.o = u;
  r = (unsigned int)af % (~s / ae);
}

int main() {
  fn4();
  return 0;
}