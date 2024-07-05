
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5;
int u;
int main() {
  struct m ad = {1957};
  ad.o = 5; // Inlined function call
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
}
