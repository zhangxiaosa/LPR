
int fn1() { return 5; }

static int s = -5;

struct m {
  int o_prime_1 : 1;
};

int fn3() {
  struct m ad = {1957};
  ad.o_prime_1 = 0;
}
