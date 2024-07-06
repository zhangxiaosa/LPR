unsigned fn1(p2) { return p2; }
struct m {
  signed p2 : 18;
  signed o : 1;
};
char p2;
int main() {
  struct m o = {1957};
  o.o = fn1(5);
  int m = o.o;
  o.o = p2 = p2 % (4 / m);
  o.o;
}
