typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

e fn1(p2) { return p2; }

c r;
static signed s = -5L;
g t;

d fn4() {
  signed ae;
  ae = 5;
  r = t % (~s / ae);
}

int main() {
  fn4();
}