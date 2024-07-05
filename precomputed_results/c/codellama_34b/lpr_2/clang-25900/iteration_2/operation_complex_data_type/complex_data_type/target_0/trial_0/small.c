
int n = 18;
int o = 1;
int r;
static int s = -5L;

int fn4_inlined(p1) {
  int ad_n = 1957;
  int ad_o = p1;
  int ae;
  ae = ad_o;
  ad_o = 0;
  r = ae % (~s / ae);
  return ad_o;
}

int main() {
  fn4_inlined(5);
}
