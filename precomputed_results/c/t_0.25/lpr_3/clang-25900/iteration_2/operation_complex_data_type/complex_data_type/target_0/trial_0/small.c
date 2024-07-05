unsigned fn1(unsigned p2) {
  return p2;
}

int main() {
  struct m {
    signed n : 18;
    signed o : 1;
  };
  struct m ad = {1957};
  ad.o = fn1(5);
}