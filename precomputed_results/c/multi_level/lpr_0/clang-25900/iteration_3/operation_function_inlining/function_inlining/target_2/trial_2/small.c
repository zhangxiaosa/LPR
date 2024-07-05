int r;

struct m {
  int n : 18;
  int o : 1;
};

int fn4() {
  struct m ad;
  ad.o = 5;
  r = r % (5 / ad.o);
  return ad.o;
}

int main() {
  fn4();
}