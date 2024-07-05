unsigned p1;
int p2;
int n;
int o;
static char s;
int t;
int u;
int ae;
int r;

int fn1(unsigned p1, int p2) {
  return p2;
}

int main() {
  p1 = 5;
  p2 = 5;
  n = 0;
  o = 0;
  s = -5L;
  t = 0;
  u = 0;
  ae = 0;
  r = 0;

  struct m {
    int n : 18;
    int o : 1;
  } p2_struct = {1957};

  p2_struct.o = fn1(p1, p2);
  ae = p2_struct.o;
  p2_struct.o = u;
  r = t % (~s / ae);

  return 0;
}