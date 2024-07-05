
struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
  int ad = 1957;
  ad = p1;
  int ae;
  int af = u;
  ae = ad;
  ad = u;
  r = af % (~s / ae);
  return ad;
}

int main() {
  fn4_inlined(5);
}
