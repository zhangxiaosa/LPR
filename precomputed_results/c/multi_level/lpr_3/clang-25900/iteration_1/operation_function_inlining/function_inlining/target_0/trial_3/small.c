struct m {
  signed n : 18;
  signed o : 1;
};
int r;
static signed s = -5L;
int t;
int u;
int main() {
  struct m ad = {1957};
  ad.o = 5;  // Inlined fn1(5, 5)
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}