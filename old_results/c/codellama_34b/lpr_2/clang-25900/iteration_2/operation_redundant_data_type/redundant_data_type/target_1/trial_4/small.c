
int r;
static int s = -5L;

int fn4_inlined(int p1) {
  int ad = 1957;
  ad = p1;
  int ae;
  ae = ad;
  ad = 0;
  r = ae % (~s / ae);
  return ad;
}

int main() { fn4_inlined(5); }
