int fn1(unsigned p1, int p2) {
  return p2;
}

int r;
static int s = -5L;
int t;
int u;

int main() {
  r = t % (~s / fn1(5, 5));
}