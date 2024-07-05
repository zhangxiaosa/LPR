
int fn1(int p1, int p2) { return p2; }
int main() {
  struct m ad = {1957};
  ad.o = fn1(ad.o, 5);
  ad.o = ad.o;
  int r = ad.o % (5 / ad.o);
}
