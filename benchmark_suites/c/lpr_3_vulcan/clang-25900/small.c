unsigned fn1(p1, p2) { return p2; }
struct m {
  signed u : 18;
  signed o : 1;
};
char static s = -5L;
int p2;
int main() {
  struct m o = {1957};
  o.o = fn1(5, 5);
  signed ae = o.o;
  o.o = p2 = p2 % (~s / ae);
  o.o;
}
