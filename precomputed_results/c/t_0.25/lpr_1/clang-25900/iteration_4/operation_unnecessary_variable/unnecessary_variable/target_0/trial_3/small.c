int fn1(p2) {
  return p2;
}

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;

long fn4() {
  struct m p2 = {1957};
  p2.o = fn1(5);
  r = p2.o;
  r = r % (~s / r);
  p2.o;
}

int main() {
  fn4();
}