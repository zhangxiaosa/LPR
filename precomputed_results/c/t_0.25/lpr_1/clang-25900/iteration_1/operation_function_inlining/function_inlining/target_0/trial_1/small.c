typedef int c;
typedef long d;

struct m {
  signed n : 18;
  signed o : 1;
};

c r;
static signed s = -5L;
c t;

d fn4() {
  struct m p2 = {1957};
  p2.o = 5;
  signed ae;
  ae = p2.o;
  p2.o = r;
  r = t % (~s / ae);
  p2.o;
}

int main() {
  fn4();
}