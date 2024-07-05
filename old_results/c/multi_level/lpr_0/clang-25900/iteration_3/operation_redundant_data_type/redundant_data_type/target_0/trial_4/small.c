unsigned int fn1(unsigned int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

unsigned int fn4() {
  struct m ad = {(unsigned int)1957};
  ad.o = (unsigned int)fn1(5);
  unsigned int ae;
  ad.o = (unsigned int)0;
  r = r % (5 / (int)ae);
  return ad.o;
}

int main() {
  fn4();
}