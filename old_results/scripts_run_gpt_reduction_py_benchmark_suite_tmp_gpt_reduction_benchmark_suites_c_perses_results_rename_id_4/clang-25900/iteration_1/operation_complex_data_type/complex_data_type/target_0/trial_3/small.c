int fn1(unsigned p1, int p2) { return p2; }

struct m {
  int n;
  int o;
};

int r;
static int s = -5L;
int t;
int u;
int main() {
  struct m p2;
  int fn1_result;
  int ae;

  p2.n = 0;
  p2.o = 0;

  fn1_result = fn1(5, 5);

  p2.o = fn1_result;

  ae = p2.o;

  p2.o = u;

  r = t % (~s / ae);

  ae;
}