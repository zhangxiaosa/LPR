struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;

long fn4() {
  struct m p2 = {1957};
  p2.o = 5;  // Inlined function body: return 5;
  signed ae;
  ae = p2.o;
  p2.o = r;
  r = r % (~s / ae);
  p2.o;
}

int main() {
  fn4();
}