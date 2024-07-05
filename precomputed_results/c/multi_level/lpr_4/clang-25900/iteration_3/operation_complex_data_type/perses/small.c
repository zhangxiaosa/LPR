int fn1(unsigned p1, int p2) { return p2; }
int r;
static char s = -5;
int ae;
int main() {
  struct {
    int n : 18;
    int o : 1;
  } p2 = {1957};
  p2.o = fn1(5, 5);
  ae = p2.o;
  p2.o = 0;
  r = r % (~s / ae);
  p2.o;
}
