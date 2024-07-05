unsigned fn1(unsigned p1, int p2) {
  return p2;
}

unsigned p1;

int r;
signed s;
unsigned t;
int u;
unsigned v;

struct m {
  signed n : 18;
  signed o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = fn1(p1, 5);
  signed ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}