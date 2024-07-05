int fn1(int p2) { return p2; }

struct m {
  int n;
  int o;
};

int r;
static int s = -5;
int t;

long fn4() {
  struct m p2;
  p2.n = 1957;
  p2.o = fn1(5);
  int ae;
  ae = p2.o;
  p2.o = r;
  r = t % (~s / ae);
  p2.o;
}

int main() {
  fn4();
}