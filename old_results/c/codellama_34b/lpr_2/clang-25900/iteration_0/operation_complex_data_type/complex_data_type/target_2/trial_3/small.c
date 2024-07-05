
static int s_1 = -5L;
static int s_2 = -5L;

int r;
g t;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s_1 / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }
