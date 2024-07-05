int fn1(int p2) { return p2; }

int r;
int t;

int main() {
  struct {
    signed int n : 18;
    signed int o : 1;
  } ad = {1957};
  ad.o = fn1(5);
  signed int ae;
  ae = ad.o;
  ad.o = 0;
  r = t % (5 / ae);
  ad.o;
}