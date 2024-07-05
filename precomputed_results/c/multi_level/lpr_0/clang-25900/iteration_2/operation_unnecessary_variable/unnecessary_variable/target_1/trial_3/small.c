int r;
unsigned t;

struct m {
  int n : 18;
  int o : 1;
};

int fn4() {
  struct m ad = {1957};
  ad.o = 5;
  r = t % (~(-5L) / ad.o);
  return 0;
}

int main() {
  fn4();
}