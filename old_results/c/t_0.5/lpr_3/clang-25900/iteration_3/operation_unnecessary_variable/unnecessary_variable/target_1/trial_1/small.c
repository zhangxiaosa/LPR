unsigned fn1(p2) { return p2; }

int r;
unsigned t;
int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};
  ad.o = fn1(5);
  ad.o = 0;
  r = t % (5 / 5);
}