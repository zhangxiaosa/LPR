
unsigned int fn1(unsigned int p1, int p2) { return p2; }
struct m {
  signed int n : 18;
  signed int o : 1;
};
int r;
static int s = -5L;
int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = ae;
  r = ae;
}
