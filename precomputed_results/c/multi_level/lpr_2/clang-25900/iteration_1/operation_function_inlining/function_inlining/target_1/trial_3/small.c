struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

long fn4() {
  struct m ad = {1957};
  ad.o = 5; // Inlined value of fn1(v, 5) directly
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  // ad.o; // Unused expression removed
}

int main() {
  fn4();
}