
struct m {
  int n : 18;
  int o : 1;
};

int fn1() { return 5; }

unsigned r;
unsigned t;

int main() {
  struct m ad = {1957};
  ad.o = fn1();
  ad.o = ad.o;
  r = t % (5 / ad.o);
  ad.o;
}
