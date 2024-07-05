typedef long d;
unsigned fn1(int p2) { return p2; }
struct m {
  signed n : 18;
  signed o : 1;
};
int r;
static signed s = -5L;
int t;
d fn4() {
  struct m p2 = {1957};
  p2.o = fn1(5);
  int ae = p2.o;
  p2.o = r;
  r = t % (~s / ae);
}
int main() {
  fn4();
}