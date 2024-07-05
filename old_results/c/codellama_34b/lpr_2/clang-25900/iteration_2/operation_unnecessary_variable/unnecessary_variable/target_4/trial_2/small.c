
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5L;
int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int r_tmp = ad.o % (~-5L / ad.o);
  r = r_tmp;
  return ad.o;
}
int main() { fn4_inlined(5); }
