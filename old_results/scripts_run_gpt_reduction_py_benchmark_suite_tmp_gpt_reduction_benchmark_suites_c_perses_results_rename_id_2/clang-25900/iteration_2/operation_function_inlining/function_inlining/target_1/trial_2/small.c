struct m {
  signed n : 18;
  signed o : 1;
};

int r;
unsigned t;
int u;
unsigned v;

long fn4() {
  struct m ad = {1957};
  ad.o = 5;  // Inlined function fn1(v, 5)
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (4 / ae);
  ad.o;
}

int main() {
  fn4();
}