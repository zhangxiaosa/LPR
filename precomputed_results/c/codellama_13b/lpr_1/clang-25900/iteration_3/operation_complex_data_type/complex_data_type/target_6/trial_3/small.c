
struct m {
  int n : 18;
  int o_prime_1 : 1;
  int o_prime_2 : 1;
};

int fn1_1(int p1, int p2) {
  return p2;
}

int fn1_2(int p1, int p2) {
  return p2;
}

int r;
static int s = -5L;
int t;

int fn3_1(struct m ad) {
  int ae = fn1_1(5, 5);
  ad.o_prime_1 = ae;
  r = t % (~s / ae);
  ad.o_prime_2 = ad.o_prime_1;
}

int fn3_2(struct m ad, int ae) {
  ad.o_prime_1 = ae;
  r = t % (~s / ae);
  ad.o_prime_2 = ad.o_prime_1;
}

int main() {
  struct m ad = {1957};
  int ae = fn1_2(5, 5);
  fn3_1(ad);
  fn3_2(ad, ae);
}
