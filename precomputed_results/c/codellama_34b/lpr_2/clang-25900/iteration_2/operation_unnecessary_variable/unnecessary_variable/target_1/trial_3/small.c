
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5L;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = 1957;
  int r_tmp = 1957 % (~s / 1957);
  r = r_tmp;
  return ad.o;
}

int main() { fn4_inlined(5); }
