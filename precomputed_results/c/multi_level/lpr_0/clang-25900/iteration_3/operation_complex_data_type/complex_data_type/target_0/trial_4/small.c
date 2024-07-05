int r;

int fn1(int p2) { return p2; }

int main() {
  struct {
    int n : 18;
    int o : 1;
  } ad;

  ad.n = 1957;
  ad.o = fn1(5);
  int ae;
  ae = ad.o;
  ad.o = 0;
  r = r % (5 / ae);
  return ad.o;
}
