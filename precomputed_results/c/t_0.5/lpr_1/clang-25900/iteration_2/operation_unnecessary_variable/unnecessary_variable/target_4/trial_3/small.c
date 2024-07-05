int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  ad.o = fn1(5);
  ad.o;
}