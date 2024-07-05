int r;
int fn1(p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int fn4() {
  struct m ad = {1957};
  ad.o = fn1(5);
  r = r % (5 / ad.o);
  return ad.o;
}
int main() { fn4(); }
