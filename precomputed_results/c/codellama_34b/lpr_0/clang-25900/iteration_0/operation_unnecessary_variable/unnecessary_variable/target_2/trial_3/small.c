
unsigned g(unsigned p1, int p2) { return p2; }
struct m {
  signed n : 18;
  signed o : 1;
};
int main() {
  struct m ad = {1957};
  ad.o = g(0, 5);
  ad.o = 0;
  int r = t % (~s / ad.o);
}
