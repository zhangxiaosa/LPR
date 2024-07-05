unsigned int fn1(int p2) { return p2; }

unsigned int r;
unsigned int t;

int main() {
  struct {
    unsigned int n : 18;
    unsigned int o : 1;
  } ad = {1957};
  ad.o = fn1(5);
  unsigned int ae;
  ae = ad.o;
  ad.o = 0;
  r = t % (5 / ae);
}