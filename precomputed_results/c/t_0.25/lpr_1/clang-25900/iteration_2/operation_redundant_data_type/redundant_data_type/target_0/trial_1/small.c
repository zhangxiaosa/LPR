unsigned fn1(long p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
int t;

long fn4() {
  struct m p2 = {1957};
  p2.o = fn1(5);
  long ae;
  ae = p2.o;
  p2.o = r;
  r = t % (~s / ae);
}

int main() {
  fn4();
}