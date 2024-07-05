
struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int af = 0;
  r = af % (~s / ad.o);
  return ad.o;
}

int main() { fn4_inlined(5); }
