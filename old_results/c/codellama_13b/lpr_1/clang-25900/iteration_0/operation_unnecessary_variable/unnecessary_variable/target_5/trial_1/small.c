
int fn1(int p1) {
  return p1;
}

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

int fn3(int q_l) {
  struct m ad = {1957};
  ad.o = fn1(v);    // Optimized out
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}

int main() {
  fn3(0);
}
