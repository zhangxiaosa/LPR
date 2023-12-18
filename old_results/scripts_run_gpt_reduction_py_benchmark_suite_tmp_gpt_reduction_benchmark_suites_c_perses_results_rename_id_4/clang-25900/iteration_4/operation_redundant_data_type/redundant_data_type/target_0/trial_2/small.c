int fn1(unsigned int p1, int p2) {
  return p2;
}

int r;
int ae;

int main() {
  struct {
    int n;
    int o;
  } p2 = {1957};

  p2.o = fn1(5, 5);
  ae = p2.o;
  p2.o = 0;
  r = r % (4 / ae);
  p2.o;
}