int fn1(unsigned p1, int p2) { return p2; }

int r;

int main() {
  struct {
    int n : 18;
    int o : 1;
  } p2 = {1957};
  p2.o = fn1(5, 5);
  p2.o = 0;
p2.o;
}