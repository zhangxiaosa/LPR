int r;
static int s = -5L;
unsigned t;
int u;
#define fn1(p2) (p2)
struct m {
  int n : 18;
  int o : 1;
};
int fn4() {
  struct m ad = {1957};
  ad.o = 5;   // Inlined fn1(5)
  int ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;       // Unused, can be removed
}
int main() {
  struct m ad = {1957};
  ad.o = 5;   // Inlined fn1(5)
  int ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;       // Unused, can be removed
}