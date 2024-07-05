unsigned fn1(unsigned p1, int p2) {
  return p2;
}

unsigned q_l;
int r;
unsigned t;
int u;
unsigned v;

int fn2() {
  int ae;
  ae = fn1(v, 5);
  r = t % (5 / ae);
}

int main() {
  fn2();
}