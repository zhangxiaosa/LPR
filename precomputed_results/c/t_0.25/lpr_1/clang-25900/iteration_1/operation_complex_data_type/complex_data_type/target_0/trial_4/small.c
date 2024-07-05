typedef long d;

unsigned fn1(unsigned p2) {
  return p2;
}

struct m {
  signed int n;
  signed int o;
};

int r;
static signed int s = -5L;
int t;

d fn4() {
  struct m p2 = {1957};
  p2.o = fn1(5);
  signed int ae;
  ae = p2.o;
  p2.o = r;
  r = t % (~s / ae);
  p2.o;
}

int main() {
  fn4();
}