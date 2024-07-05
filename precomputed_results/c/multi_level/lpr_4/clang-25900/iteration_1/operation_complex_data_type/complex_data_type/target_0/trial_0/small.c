int fn1(unsigned p1, int p2) { return p2; }

int t;
int u;
int main() {
  struct {
    int n : 18;
    int o : 1;
  } p2 = {1957};
  p2.o = fn1(5, 5);
  int ae = p2.o;
  p2.o = u;
  int r = t % (~s / ae);
}
