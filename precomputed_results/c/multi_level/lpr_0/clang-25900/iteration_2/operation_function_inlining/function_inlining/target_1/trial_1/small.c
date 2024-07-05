int r;
static int s = -5L;
unsigned t;
struct m {
  int n : 18;
  int o : 1;
};
int fn4() {
  struct m ad = {1957};
  ad.o = 5; // Inlined fn1(5)
  int ae;
  ae = ad.o;
  ad.o = 0;
  r = t % (~s / ae);
  return ad.o;
}
int main() { fn4(); }
