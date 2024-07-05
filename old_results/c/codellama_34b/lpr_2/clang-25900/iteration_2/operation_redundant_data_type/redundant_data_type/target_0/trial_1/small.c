
int r;
static int s = -5L;
int fn4_inlined(p1) {
  int ad = 1957;
  ad.o = p1;
  int ae;
  ae = ad.o;
  ad.o = 0;
  r = ae % (~s / ae);
  return ad.o;
}
int main() { fn4_inlined(5); }
