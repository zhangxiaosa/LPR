unsigned fn1(unsigned p1, unsigned p2) {
  return p2;
}

unsigned r;
static signed s = -5L;
unsigned t;
unsigned v;

int main() {
  fn1(v, 5);
  r = t % (~s / fn1(v, 5));
}