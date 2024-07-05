int fn1(unsigned p1, int p2) { return p2; }

int r;
int ae;
int main() {
  struct {
    int n : 18;
    int o : 1;
  } p2 = {1957};
  ae = p2.o;
  p2.o;
}