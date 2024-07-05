
int r;
static int s = -5L;
int fn4_inlined(p1) {
  int ad = 1957;
  ad %= p1;
  ad /= ~s / ad;
  r = ad % (~s / ad);
  return ad;
}
int main() { fn4_inlined(5); }
