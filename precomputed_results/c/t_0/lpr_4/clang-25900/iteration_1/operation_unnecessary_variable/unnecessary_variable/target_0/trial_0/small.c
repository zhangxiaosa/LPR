typedef unsigned e;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

int r;
static signed s = -5L;
g t;
int u;
g v;

long fn4() {
  signed ae;
  ae = fn1(v, 5);
  ae = u;
  r = t % (~s / ae);
}

int main() {
  fn4();
}