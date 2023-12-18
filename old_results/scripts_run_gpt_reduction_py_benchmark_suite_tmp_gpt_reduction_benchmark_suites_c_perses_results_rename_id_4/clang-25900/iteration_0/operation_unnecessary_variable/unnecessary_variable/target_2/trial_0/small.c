int fn1(unsigned p1, int p2) {
  return p2;
}

struct m {
  int n: 18;
  int o: 1;
};

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

int fn4() {
  struct m p2 = {1957};
  p2.o = 5;
  r = t % (~s / 5);
}

int main() {
  fn4();
}